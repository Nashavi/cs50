#include <stdio.h>
#include <cs50.h>

int main (void)
{
    printf("Height: ");
    int levels = get_int();
    
    while (levels<0 || levels>23)
    {
        printf("Height: ");
        levels = get_int();
    }
    
    for (int i=1;i<=levels;i++)
        { 
            for (int j=levels-i;j>=1;j--)
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

