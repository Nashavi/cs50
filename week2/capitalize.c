#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string();
    
    if (s!= NULL)
    {
        for (int i =0, n = strlen(s) ; i<n ; i++)
        {
            if(s[i] >= 'a' && s[i]<='z')
            {
                printf("%c",s[i] -32);
                s[i] = s[i]- 32;
            }
        }
    }
    printf("\n%s\n",s);
}