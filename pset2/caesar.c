#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // check if the number of arguments are 2 and if not, print error and return 1
    if(argc !=2)
    {
        printf("Usage: ./caesar k");
        
        return 1;
    }
    else
    {
    
        // save the returned string as a number. Asusmed that only an integer would be given as an argument
        int num = atoi(argv[1]);
        
        // convert higher numbers to less than 26
        num = num % 26;
        
        //get string as input
        printf("plaintext: ");
        string s = get_string();
        
        // save length  of the string
        int n = strlen(s);
        
        printf("ciphertext: ");   
        
        // iterate through each character
        for (int i=0; i<n; i++)
        {
            // check if the character is an alphabet
            if ((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z'))
            {
                //if an alphabet, add the value of key to the value of that alphabet
                int p = s[i]+num;
                
                // check if the current value of index is over the alphabet z or Z
                if ((p>'z' && s[i]<='z') || (p>'Z' && s[i]<='Z'))
                {
                    // if it is true, wrap the alphabets index by reducing the value by 26
                    p -= 26;
                }
                
                //Print the character
                printf("%c",p);
            }
            else
            {
                //if not-alphabet, print as such
                printf("%c",s[i]);
            }
        }
        
        //print new line
        printf("\n");
    }
        
}