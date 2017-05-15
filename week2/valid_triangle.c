#include <cs50.h>
#include <stdio.h>

string check_validity(int a,int b,int c);

int main(void)
{
    printf("Input the first side\n");
    int x = get_int();
    
    printf("Input the second side\n");
    int y = get_int();
    
    printf("Input the third side\n");
    int z = get_int();
    
    string s = check_validity(x,y,z);
    
    printf("%s\n",s);
    
}

string check_validity(int a,int b,int c)
{
    string validity = "This is not a valid traingle";
    if (a>0 && b>0 && c>0)
    {
        if(a < b+c && b< a+c && c<a+b)
        {
            validity = "This is a valid triangle";
        }
    }
    return validity;
}