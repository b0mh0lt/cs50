/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int middle = start + (end - start) / 2;
        if (value == values[middle])
        {
            return true;
        }
        else if (value < values[middle])
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int count[65537] = {0};
    int sort[n];
    for (int i = 0; i < n; i++)
    {
        count[values[i]]++;
    }
    for (int i = 1; i < 65537; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        sort[count[values[i]] - 1] = values[i];
        count[values[i]]--;
    }
    for (int i = 0; i < n; i++)
    {
        values[i] = sort[i];
    }
    return;
}
