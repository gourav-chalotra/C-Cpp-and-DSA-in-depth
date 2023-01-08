// 9. Write a function in C to merge two arrays of the same size sorted in descending order.

#include <stdio.h>
void swapElement(int *, int *);
int mergeTwoArrays(int *arr1, int *arr2, int size);
int main()
{
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int arr1[size], arr2[size];

    printf("\n\nEnter the fist array value: \n");

    int i = 0;
    while (i < size)
    {
        scanf("%d", &arr1[i]);
        i++;
    }

    printf("\n\nEnter the secound array value: \n");

    i = 0;
    while (i < size)
    {
        scanf("%d", &arr2[i]);
        i++;
    }

    mergeTwoArrays(arr1, arr2, size);

    return 0;
}

void swapElement(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int mergeTwoArrays(int *arr1, int *arr2, int size)
{
    int new_arr_size = size * 2;
    int new_arr[new_arr_size];

    int i = 0, j = 0;
    while (i < new_arr_size)
    {
        if (i < size)
        {
            new_arr[i] = arr1[i];
        }
        else if (i >= size)
        {
            new_arr[i] = arr2[j];
            j++;
        }
        i++;
    }

    i = 0, j = 0;
    while (i < new_arr_size - 1)
    {
        j = i + 1;
        while (j < new_arr_size)
        {
            if (new_arr[i] < new_arr[j])
            {
                swapElement(&new_arr[i], &new_arr[j]);
            }
            j++;
        }
        i++;
    }
    i = 0;
    printf("\n\nmerge array in discending order\n");
    while(i < new_arr_size)
    {
        printf("%d ",new_arr[i]);
        i++;
    }
    printf("\n\n");
}