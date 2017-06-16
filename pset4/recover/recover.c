#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc !=2)
    {
        fprintf(stderr, "Usage: ./recover abc.raw\n");
        return 1;
    }
    
    char *infile = argv[1];
    
    // open input file 
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }
    
    // open output file
    FILE *outptr;
    
    //jpg counter
    int count = 0;
    
	int open = 0;
    
    uint8_t checkjpg1[4] = {0xff, 0xd8, 0xff, 0xe0};
	uint8_t checkjpg2[4] = {0xff, 0xd8, 0xff, 0xe1};
	
    uint8_t buffer[512];
	uint8_t check[4];
	fread(buffer, 512, 1, inptr);	

	while(fread(buffer, 512, 1, inptr) > 0)
	{
	    // Add first four bytes into the check buffer
		for(int i = 0; i < 4; i++)
		{
				check[i] = buffer[i];
		}

		// Check for a jpeg signature
		if((memcmp(checkjpg1, check, 4) == 0 ) || (memcmp(checkjpg2, check, sizeof(check)) == 0))
		{
			// Construct the filename
			char filename[8];
			sprintf(filename, "%03d.jpg", count);

			if(open == 0)
			{
				outptr = fopen(filename, "w");
				fwrite(buffer, sizeof(buffer), 1, outptr);
				open = 1;
			}
			if(open == 1)
			{
			    fclose(outptr);
				outptr = fopen(filename, "w");
				fwrite(buffer, sizeof(buffer), 1, outptr);
				count++;                 
			}
		}
		else
		{
		    if(open == 1)
				{
					fwrite(buffer, sizeof(buffer), 1, outptr);
				}
		}
    }

    // Close filehandles, be a good citizen and exit.
    if(outptr)
    {
    fclose(outptr);
    }

    fclose(inptr);
    return 0;
}
