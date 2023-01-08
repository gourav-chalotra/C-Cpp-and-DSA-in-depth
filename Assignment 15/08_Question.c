// 8. Write a function in C to print all unique elements in an array.

#include <stdio.h>
int arr1[100] = {0};
void count_unique(int *ptrArr,int size)
{
    for (int i = 0; i < size; i++)
    {
        arr1[ptrArr[i]]++;
    }
    printf("unique elements in an array is\n");
    for (int i = 0; i < 30; i++)
    {
        if (arr1[i] == 1)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int arr[10];
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    count_unique(arr,10);

    return 0;
}