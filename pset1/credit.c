#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    long long cardnumber =0;
    
    do
    {
        printf("Number: ");
        cardnumber = get_long_long();
        
        long long digits = cardnumber;
        
        int c=0;
        while (digits >0)
        {
            digits = digits/10;
            c++;
        }
        
        if ((c!=13) && (c!=15) && (c!=16))
        {
            printf("Length of Credit Card number is %i",c);
            printf("Invalid Credit Card Number\n");
            cardnumber = 0;
         }
    }
    while(cardnumber<=0);
    
    
    
}