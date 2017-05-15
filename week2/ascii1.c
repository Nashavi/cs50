#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // single quote for chars and double for phrases and strings
    for(char c= 'A'; c <='z'; c++)
    {
        printf("%c is %ithe character\n",c,c);
    }
}