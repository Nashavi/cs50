#include <stdio.h>
#include <cs50.h>

int main(void)
{
    void ins_sort(int array[],int n);
    
    printf("Number of elements to sort? ");
    
    int numb = get_int();
    
    int arr[numb];
    
    for (int i = 0 ; i<numb ; i++)
    {
        printf("Input element no. %i: ",i+1);
        arr[i] = get_int();
    }
    
    printf("Unsorted array:\n");
    for (int i = 0; i<numb ; i++)
    {
        printf ("%i ", arr[i]);
    }
    printf ("\n");
    
    ins_sort(arr,numb);
    
    printf("Sorted array:\n");
    for (int i = 0; i<numb ; i++)
    {
        printf ("%i ", arr[i]);
    }
    printf ("\n");
}

void ins_sort(int array[],int n)
{

    for (int i = 1; i< n; i++)
    {
        int to_sort = array[i];
        
        int j = i;
        
        while(to_sort<array[j-1] && j>0)
        {
            array[j] = array[j-1];
            j--;
        }
        
        array[j] = to_sort;
        
    }
    return;
}