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

// This function takes last element as pivot, places the pivot element at its correct position in sorted array, and places all smaller (smaller than pivot) elements to the left of pivot and all greater elements to the right of pivot
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
    swap(&arr[i + 1], &arr[end]); // We didn't write pivot in place of arr[end] coz we want to make changes in the array itself

    return (i + 1); //returning that index where pivot is placed as quicksort will now be done on the left and right side of pivot
}

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the array elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nGiven array is : ");
    printArray(arr, n);

    quicksort(arr, 0, n - 1);

    printf("\nSorted array is : ");
    printArray(arr, n);

    return 0;
}