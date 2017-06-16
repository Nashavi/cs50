/**
 * Copies a BMP piece by piece, just because.
 */
       
#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        fprintf(stderr, "Usage: ./resize n infile outfile\n");
        return 1;
    }

    // remember filenames
    int n = atoi(argv[1]);
    char *infile = argv[2];
    char *outfile = argv[3];
    
    if(n < 1 || n > 100)
	{
		printf("The resize factor should be a positive integer <= 100.\n");
		return 2;
	}

    // open input file 
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 3;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 4;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 || 
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 5;
    }
	
    // determine outfile's BITMAPFILEHEADER and BITMAPINFOHEADER
    BITMAPFILEHEADER outbf;
    BITMAPINFOHEADER outbi;
    
    //From here on code is all NEW
    outbf = bf;
    outbi = bi;
    outbi.biWidth *= n;
    outbi.biHeight *= n;


    // determine org padding and new padding
    int in_padding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    int out_padding = (4 - (outbi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    
    // determine image size
    outbi.biSizeImage = abs(outbi.biHeight) * ((outbi.biWidth * sizeof (RGBTRIPLE)) + out_padding);
    outbf.bfSize = outbi.biSizeImage + sizeof (BITMAPFILEHEADER) + sizeof (BITMAPINFOHEADER);
    
    // write outfile's BITMAPFILEHEADER
    fwrite(&outbf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&outbi, sizeof(BITMAPINFOHEADER), 1, outptr);

    // iterate over infile's scanlines
    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {
        
        // iterate each line of infile's scanlines n times
        for (int p = 0; p<n ; p++)
        {
            // iterate over pixels in scanline
            for (int j = 0; j < bi.biWidth; j++)
            {
                // temporary storage
                RGBTRIPLE triple;
    
                // read RGB triple from infile
                fread(&triple, sizeof(RGBTRIPLE), 1, inptr);
                
                for (int q = 0; q<n ; q++)
                {    
                // write RGB triple to outfile
                fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
                }
            }
            
            // skip over padding from in_file, if any
            fseek(inptr, in_padding, SEEK_CUR);
    
            // then add it back to out_file
            for (int k = 0; k < out_padding; k++)
            {
                fputc(0x00, outptr);
            }
            
            // Retrace the line to the beginning for looping again
            fseek(inptr, -(bi.biWidth * 3 + in_padding ), SEEK_CUR);
        }
        // For moving over to the next line
        fseek(inptr, (bi.biWidth * 3 + in_padding ), SEEK_CUR);
    }

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}
