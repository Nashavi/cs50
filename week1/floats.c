#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Your fav number: ");
    float x = get_float();
    
    printf("Your second fav number : ");
    float y = get_float();
    
    printf("Sum of your fav numbers %f and %f is %f\n", x, y, x+y);
    
    printf("Diff of your fav numbers %f and %f is %f\n", x, y, x-y);
    
    printf("Product of your fav numbers %f and %f is %f\n", x, y, x*y);
    
    printf("Div of your fav numbers %f and %f is %f\n", x, y, x/y);
    
}