#include <cs50.h>
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;
    
    printf("Unswapped : %i is x and %i is y\n",x,y);
    
    swap(x, y);
    
    printf("Swapped : %i is x and %i is y\n",x,y);
}

void swap(int a, int b)
{

    printf("Unswapped : %i is a and %i is b\n",a,b);
    
    int tmp = a;
    a = b;
    b = tmp;
    
    printf("Swapped : %i is a and %i is b\n",a,b);
}