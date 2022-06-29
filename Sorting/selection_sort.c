#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int len, min;
    printf("Enter the no. of elements you want in the Array : ");
    scanf("%d", &len);
    int arr[len];
    printf("Enter the %d elements : ", len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    // SELECTION SORT
    // Sorted in Ascending Order

    for (int i = 0; i < len - 1; i++) // Total Passes are 1 less than the size of array
    {
        // Find the index of smallest element
        min = i;
        for (int j = i+1; j < len; j++) // Each pass would go to the end of array
        {
            if (arr[min] > arr[j])
                min = j; 
        }
        if(i!=min)
            swap(arr+i, arr+min);
    }

    printf("\nArray after Selection Sort : ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
