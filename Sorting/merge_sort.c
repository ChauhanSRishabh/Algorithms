#include <stdio.h>

// MERGE SORT

// Function to merge 2 subarrays of arr[].
// First subarray is arr[beg.....mig]
// Second subarray is arr[mid+1.......end]
void merge(int arr[], int beg, int mid, int end)
{
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    // Temporary arrays created
    int LeftArray[n1], RightArray[n2];

    // Copy data into the temporary arrays
    for (int i = 0; i < n1; i++)
        LeftArray[i] = arr[beg + i];
    for (int j = 0; j < n2; j++)
        RightArray[j] = arr[mid + 1 + j];

    // Now merge the temporary arrays back to make arr[beg.......end]
    int i, j, k;
    i = 0;   // Index for 1st sub-array
    j = 0;   // Index for 2nd sub-array
    k = beg; // Index for the ultimate sorted and merged array

    // Think why k=beg!!
    // Hint : See the top-down flow of the algorithm, how it divides and conquers

    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
        {
            arr[k] = LeftArray[i];
            i++;
        }
        else
        {
            arr[k] = RightArray[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of LeftArray[], if any
    while (i < n1)
    {
        arr[k] = LeftArray[i];
        i++;
        k++;
    }

    // Copy the remaining elements of RightArray[], if any
    while (j < n2)
    {
        arr[k] = RightArray[j];
        j++;
        k++;
    }
}

