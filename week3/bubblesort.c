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
    int count;
    
    do
    {
        count = 0;
        for (int i =1; i < 5; i++)
        {
            if(values[i]< values[i-1])
            {
                int swap = values[i-1];
                values[i-1] = values[i];
                values[i] = swap;
                
                count += 1;
            }
        }
    }
    while (count != 0);
    
    return;
}
    