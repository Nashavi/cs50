#include <stdio.h>
#include <cs50.h>


// argc is the number of arguments user provides while running the program including the program name itself
int main (int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello %s\n",argv[1]);
    }
    else
    {
        printf("hello world\n");
    }
}