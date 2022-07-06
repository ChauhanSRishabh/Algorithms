#include<stdio.h>
int partition(int arr[], int beg, int end);
void quicksort(int arr[], int beg, int end);

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void quicksort(int arr[], int beg, int end)
{
    if(beg<end)
    {
        int p = partition(arr, beg, end);
        quicksort(arr, beg, p-1);
        quicksort(arr, p+1, end);
    }
}

// We take last element as pivot
int partition(int arr[], int beg, int end)
{
    int pivot = arr[end];
    int i = (beg - 1); // Index of smaller element, -1
    // i is also the position of pivot found
 
    for (int j = beg; j < end; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    
    // Putting pivot in it's correct position
    swap(&arr[i + 1], &arr[end]);
    return (i + 1); //returning that index where pivot is placed as quicksort will now be done on the left and right side of pivot
}
