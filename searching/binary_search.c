#include <stdio.h>

int binarysearch(int arr[], int n, int item)
{
    int beg = 0, end = n - 1;

    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (item < arr[mid])
            end = mid - 1; // search in the left half
        else if (item > arr[mid])
            beg = mid + 1; // search in the right half
        else
            return mid;
    }
    return -1;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n, item;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the array elements (in sorted order) : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nGiven array is : ");
    printArray(arr, n);

    printf("Enter the element to be searched : ");
    scanf("%d", &item);

    int index = binarysearch(arr, n, item);
    if (index != -1)
        printf("\nElement %d found at index %d", item, index);
    else
        printf("\nElement to be searched does not exist in the array");
    return 0;
}