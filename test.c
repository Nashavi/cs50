#define _XOPEN_SOURCE  
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    string j = "a"; 
    for( int i =0; i<5; i++)
    {
        string generated_text[i];
        generated_text[i] = j;
        //string generated_text = "a";
        printf("%s %s\n",generated_text[i],crypt(generated_text[i],"50"));
        j++;
    }
}