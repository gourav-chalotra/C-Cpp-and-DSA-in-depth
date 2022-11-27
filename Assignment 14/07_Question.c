// 7. Write a program to find second largest in an array.Take array values from the user
#include <stdio.h>
int main()
{
    int arr[10], i = 0, max = -1200, smax = -1300;
    for (i; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (max < arr[i] && smax < max)
        {
            smax = max;
            max = arr[i];
        }
    }
    printf("The secound largest element in array is %d", smax);

    return 0;
}