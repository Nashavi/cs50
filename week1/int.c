#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Your fav number: ");
    int x = get_int();
    
    printf("Your second fav number : ");
    int y = get_int();
    
    printf("Sum of your fav numbers %i and %i is %i\n", x, y, x+y);
}