#include <cs50.h>
#include <stdio.h>

void sort(int values[]);

int arr[5];

int main(void)
{
    for (int i =0; i< 5 ; i++)
    {
        int value = get_int();
        
        arr[i] = value;
    }
    
    printf("Unsorted :\n");
    for (int i=0; i< 5 ; i++)
    {
       printf("%i",arr[i]);
    }
    printf("\n");
    
    sort(arr);
    
    printf("Sorted :\n");
    for (int i=0; i< 5 ; i++)
    {
       printf("%i",arr[i]);
    }
    printf("\n");
}


    
void sort(int values[])
{
    int max = 0;
    int max_pos;
    int end = 5;
    
    while (end>0)
    {
        for (int i = 0; i < end ; i++)
        {
            if(values[i] >= max)
            {
                max = values[i];
                max_pos = i;
            }
        }
        
        printf("%i\n",max);
        values[max_pos] = values[end-1];
        values[end-1] = max;
        max = 0;
        end = end - 1;
    }
    return;
}
    