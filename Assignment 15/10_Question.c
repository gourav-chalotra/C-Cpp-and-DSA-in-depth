// 10. Write a function in C to count the frequency of each element of an array.
#include<stdio.h>

void frequencyOfElementOfArray(int *arr,int size)
{
    int arr1[100]={0};
    int i = 0;
    while (i<size)
    {
        arr1[arr[i]]++;
        i++;
    }
    i = 0;
    while (i < 100)
    {
        if(arr1[i]!=0)
        {
            printf("%d - %d\n",i,arr1[i]);
        }
        i++;
    }
}
int main()
{
    int arr[10] = {3,5,2,1,14,5,3,6,2,2};
    int i=0;
    printf("\n\nThe array elements are:\n");
    while (i<10)
    {
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n\nFrequency of elements of an array's is:\n");
    frequencyOfElementOfArray(arr,10);
    return 0;
}