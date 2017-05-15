#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // wait for input from the user
    string s = get_string();
    int n = strlen(s);
    
    
    //checks if the first string is a space and if not, prints the upper case of the first character
    if (s[0] != ' ')
    {
        printf("%c",toupper(s[0]));
    }

    // Loop to iterate through each character of the string
    for (int i = 0; i<n ; i++)
    {
        
        // check if the current character is not a space and if prior character was a space
        if (s[i] != ' ' && s[i-1] == ' ')
        {
            // print the upper case of current character
            printf("%c",toupper(s[i]));
        }
    }
    
    // print new line
    printf("\n");
}