#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("bool is %lu\n",sizeof(bool));
    printf("int is %lu\n",sizeof(int));
    printf("long_long is %lu\n",sizeof(long long));
    printf("float is %lu\n",sizeof(float));
    printf("string is %lu\n",sizeof(string));
    printf("double is %lu\n",sizeof(double));
    printf("char is %lu\n",sizeof(char));
}