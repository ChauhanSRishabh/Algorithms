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
    int len;
    printf("Enter the no. of elements you want in the array : ");
    scanf("%d", &len);
    int arr[len];
    printf("Enter the %d elements : ", len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    // BUBBLE SORT
    // Sorted in Ascending Order

    for (int i = 1; i < len; i++) // Total passes are 1 less than the size of array
    {
        for (int j = 0; j < len - i; j++) // for each pass i, checks done are (len-i)
        {
            if (arr[j] > arr[j + 1])
                swap(arr + j, arr + j + 1); // OR swap(&arr[j], &arr[j+1]) ; one and the same thing. Swap function would not have worked if we'd have written swap(arr[j], arr[j+1])

            /*Without Swap Function
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            */
        }
    }

    printf("\nArray after Bubble Sort : ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}