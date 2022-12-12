// 3. Write a function to sort an array of any size. (TSRN)
#include <stdio.h>

void swap(int *ptr1, int *ptr2);
void sortArr(int *ptr, int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (ptr[i] > ptr[j])
                swap(&ptr[i], &ptr[j]);
        }
    }
}
int main()
{
    int arr[5] = {34, 45, 1, 3, 13};
    sortArr(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}