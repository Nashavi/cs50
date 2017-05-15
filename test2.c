#define _XOPEN_SOURCE  
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    int times = get_int();
    
    int chr = 'a';
    
    string text[times];
    
    for (int i = 0, j = times; i<j; i++)
    {
        text[i] += chr;
        
        printf("%s\n",text[i]);
        
        chr++;
    }
}