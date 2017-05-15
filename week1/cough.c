# include <stdio.h>
# include <cs50.h>

void say(string s,int n);

int main(void)
{
        say("cough",6);
        say("sneeze",2);
}

void say(string s,int n)
{
    for (int i=1; i<=n; i++)
    {
    printf("%s\n",s);
    }
}