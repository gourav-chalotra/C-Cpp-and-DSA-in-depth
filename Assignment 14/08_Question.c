// 8. Write a program to find the second smallest number in an array.Take array values from the user.
#include <stdio.h>
int main()
{
    int Arr[10], min = 200000, smin = __INT_MAX__, i;
    printf("Enter the value\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &Arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (min > Arr[i] && smin > min)
        {
            smin = min;
            min = Arr[i];
        }
    }

    printf("The secound smallest element in array is %d\n", smin);

    return 0;
}