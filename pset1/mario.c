#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int levels;
    
    do
    {
        printf("Height: ");
        levels = get_int();
    }
    while (levels<0 || levels>23);
    
    for (int i=1;i<=levels;i++)
        { 
            for (int j=levels-i;j>0;j--)
            {
            printf(" ");
            }
            for (int j=1;j<=i;j++)
            {
            printf("#");
            }
            printf("  ");
            for (int j=1;j<=i;j++)
            {
            printf("#");
            }
            printf("\n");
        }
}

