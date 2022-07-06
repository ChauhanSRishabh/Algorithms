#include<stdio.h>
int partition(int arr[], int beg, int end);
void quicksort(int arr[], int beg, int end);

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
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

int partition(int arr[], int beg, int end)
{
    
}
