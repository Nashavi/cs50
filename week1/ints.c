#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Your fav number: ");
    int x = get_int();
    
    printf("Your second fav number : ");
    int y = get_int();
    
    printf("Sum of your fav numbers %i and %i is %i\n", x, y, x+y);
    
    printf("Diff of your fav numbers %i and %i is %i\n", x, y, x-y);
    
    printf("Product of your fav numbers %i and %i is %i\n", x, y, x*y);
    
    printf("Div of your fav numbers %i and %i is %i\n", x, y, x/y);
    
    printf("Remainder of your fav numbers %i and %i is %i\n", x, y, x%y);
    
}