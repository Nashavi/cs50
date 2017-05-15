#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // ask user for
    string s = get_string();
    
    //make sure get_string returned a string
    if (s!= NULL)
    {
        //iterate printf func through each character in the string
        for (int i =0,n = strlen(s); i<n; i++)
        {
            // print i'th character in s
            printf("Hello %c\n",s[i]);
        }
    }
}

    