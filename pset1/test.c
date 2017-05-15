#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int cardnumber = get_int();
    
    int digit = (cardnumber % (10^1));
    // - cardnumber % (10^2))/(10^2);
    
    printf("%i\n",digit);
        printf("%lld\n",long_long(pow(10,1)));
    
}
