#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    bool is_not_alpha(string x);
    
    if (argc !=2)
    {
        printf("Usage: ./vigenere k\n");
        
        return 1;
    }
    else if (is_not_alpha(argv[1]))
    {
        printf("Usage: ./vigenere k; k is alpha\n");
        
        return 1;
    }
    else 
    {
        
    string k = argv[1];
    
    int j = 0;
    
    printf("plaintext: ");
    
    string s = get_string();
    
    printf("ciphertext: ");
    
    for (int i =0 , n = strlen(s); i<n ; i++)
    {
        int p = s[i];
        
        int q = k[j];
        
        if (k[j] >='a' && k[j] <='z' )
        {
            q = k[j] - 'a';
        }
        if (k[j] >='A' && k[j] <='Z' )
        {
            q = k[j] - 'A';
        }
        
        if ((p>='a' && p<='z') || (p>='A' && p<='Z'))
        {
            int chr = p+q;
            
            if ((p<='z' && chr>'z') || (p<='Z' && chr>'Z'))
            {
                chr = chr - 26;
            }
            
            j++;
            
            printf("%c",chr);
            
            if (j==strlen(k))
            {
                j=0;
            }
        }
        
        else
        {
        
        printf("%c",p);
        
        }
        
    }
    }
    
    printf("\n");
}

bool is_not_alpha(string x)
{
    for(int i = 0 , n = strlen(x) ; i<n; i++)
    {
        if (tolower(x[i]) < 'a' || tolower(x[i]) > 'z')
        {
            return true;
            break;
        }
    }
    return false;
}