#include <stdio.h>

int linersearch(int arr[], int n, int item)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == item)
            return i;
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
    printf("\nEnter the array elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nGiven array is : ");
    printArray(arr, n);

    printf("Enter the element to be searched : ");
    scanf("%d", &item);

    int index = linersearch(arr, n, item);
    if (index != -1)
        printf("\nElement %d found at index %d", item, index);
    else
        printf("\nElement to be searched does not exist in the array");
    return 0;
}