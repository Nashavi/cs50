/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int i = 0;
    while (i <= n)
    {
        int pos = (i+n)/2;
        if(values[pos] == value)
            return true;
        else if(values[pos] < value)
            i += 1;
        else 
            n = pos-1;
    }
    return false;
}

/**
 * Linear Sorts array of n values.
 */
void sort(int values[], int n)
{
    int max = 0;
    int max_pos;
    int end = n;
    
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
        
        values[max_pos] = values[end-1];
        values[end-1] = max;
        max = 0;
        end = end - 1;
    }
    return;
}
