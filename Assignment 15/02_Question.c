// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include <stdio.h>
int smallValue(int arr[],int size)
{
    int small_Val = arr[0],i;
    for ( i = 0; i < size; i++)
    {
        if(arr[i] < small_Val)
        {
            
            small_Val = arr[i];
        }
    }
    return small_Val;
}
int main()
{
    int arr[4] = {23,45,35,45};

    printf("The small value of is: %d",smallValue(arr,4));
    return 0;
}