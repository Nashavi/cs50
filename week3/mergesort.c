#include <stdio.h>
#include <cs50.h>

int main(void)
{
    void merge_sort(int array[],int n);
    
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
    
    merge_sort(arr,numb);
    
    printf("Sorted array:\n");
    for (int i = 0; i<numb ; i++)
    {
        printf ("%i ", arr[i]);
    }
    printf ("\n");
}



void merge_sort(int values[],int n)
{
    void merge(int values[], int left[], int split, int right[], int total);
        
    if (n<2)
    {
        return;
    }
    
    int split = n/2;
    
    int left_half[split];
    int right_half[n-split];
    
    for(int i =0; i< n ; i++)
    {
        if (i<split)
        {
            left_half[i] = values[i];
        }
        else
        {
            right_half[i-split] = values[i];
        }
    }
    
    merge_sort(left_half,split);
    merge_sort(right_half,n-split);
    
    merge(values,left_half,split,right_half,n);
}



void merge(int values[], int left[], int split, int right[], int total)
{
    int n_left = split;
    int n_right = total-split;
    
    int i = 0, j = 0;
    
    while(i+j < total)
    {
        if (i<n_left && (j>=n_right || left[i]<= right[j]))
        {
            values[i+j] = left[i];
            i++;
        }
        else if(j<n_right && (i>=n_left || left[i]> right[j]))
        {
            values[i+j] = right[j];
            j++;
        }
    }
    return;
}