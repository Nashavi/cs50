# include <stdio.h>
# include <math.h>
# include <cs50.h>

int main(void)
{
    float x;
    printf("O hai! How much change is owed?\n");
    
    do
    {
        x = get_float();
        
        if(x<0)
        {
            printf("Value should be positive\n");
        }
    }
    while(x<=0);
    
    int n = round(100 * x);
    
    int coin_cnt = 0;

    if (n>=25)
    {
        coin_cnt += n/25;
        n = n % 25;
    }
    if (n>=10)
    {
        coin_cnt += n/10;
        n = n % 10;
    }
    if (n>=5)
    {
        coin_cnt += n/5;
        n = n % 5;
    }
    coin_cnt += n;
    
    printf("%i\n",coin_cnt);
}