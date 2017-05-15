#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //initiate a function to return true if the input is not an alphabetic
    bool is_not_alpha(string x);
    
    //check if there are 2 arguments received from the user, if not return error
    if (argc !=2)
    {
        printf("Usage: ./vigenere k\n");
        
        return 1;
    }
    //check if arguement is alphabetic, if not, return error
    else if (is_not_alpha(argv[1]))
    {
        printf("Usage: ./vigenere k; k should be alphabet\n");
        
        return 1;
    }
    else 
    {
        
    //store key
    string key = argv[1];
    
    // store length of key
    int keylength = strlen(key);
    
    printf("plaintext: ");
    
    // Get user input text
    string input = get_string();
    
    printf("ciphertext: ");
    
    //store length of input text
    int inputlength = strlen(input);
    
    //iterate through each of the characters in input text
    for (int i = 0, k = 0; i < inputlength; i++)
    {
        // check if current character is uppercase
        if (isupper(input[i]))
        {
            // Cipher the text using the formula choosing the character from the key
            input[i] = ((input[i]-'A') + (tolower(key[(k++)%keylength])- 'a')) % 26 + 'A';
        }
        // check if current character is uppercase
        else if (islower(input[i]))
        {
            // Cipher the text using the formula choosing the character from the key
            input[i] = ((input[i]-'a') + (tolower(key[(k++)%keylength])-'a')) % 26 + 'a';
        }
    }
        //print the final string
        printf("%s\n",input);
    }
}

// cRete function to return true if the key is not alphabetic
bool is_not_alpha(string x)
{
    //iter through each characters in the key
    for(int i = 0 , n = strlen(x) ; i<n; i++)
    {
        // check if current character is not an alphabet
        if (!isalpha(x[i]))
        {
            return true;
            break;
        }
    }
    return false;
}