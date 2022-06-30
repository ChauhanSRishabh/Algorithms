#include <stdio.h>

int main()
{
    int n, i, j, temp;
    printf("Enter the no. of elements you want in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d elements : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // INSERTION SORT
    // Sorted in Ascending Order

    for (i = 1; i < n; i++) // Total passes are 1 less than the size of array
    {
        temp = arr[i]; // Picking element from unsorted part which is to be inserted at proper place
        // Sorted part is scanned to find the exact location for the insertion of the element arr[i]
        // Search starts from the end of the sorted part, j= i-1, stops when we reach the beginning or we get an element less than temp
        for (j = i - 1; j >= 0 && temp < arr[j]; j--)
            arr[j + 1] = arr[j]; // moving elements to the right by one position, ones that are greater than temp
        
        //printf("j is %d", j); To see what value j has when it comes out of the loop after making right shifts. j is one less than the desired index
        
        arr[j + 1] = temp;       // temp inserted at it's proper place
    }

    printf("\nArray after Insertion Sort : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}