#include <stdio.h>
int greatestValue(int arr[], int size)
{
    int maxInt = arr[0];
    int i;

    for (i = 1; i < size; i++)
    {
        if (maxInt < arr[i])
        {
            maxInt = arr[i];
        }
    }

    return maxInt;
}
int main()
{
    int arr[4] = {1, 34, 23, 1};

    printf("The greatest number is: %d", greatestValue(arr,4));
}