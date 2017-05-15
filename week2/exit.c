#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc!=2)
    {
        printf("Command line argument does not exsist\n");
        return 1;
    }
    printf("hello, %s\n",argv[1]);
    return 0;
}

//after runnning type "echo $?"to check the return value