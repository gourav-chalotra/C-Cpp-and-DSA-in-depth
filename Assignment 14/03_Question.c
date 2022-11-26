// 3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int main()
{
    int Arr[10], evenSum = 0, oddSum = 0;
    printf("Enter the 10 value: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &Arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (Arr[i] % 2)
        {
            oddSum = oddSum + Arr[i];
        }
        else
        {
            evenSum = evenSum + Arr[i];
        }
    }

    printf("The sum of even and odd numbers in array is %d and %d ,respecitively", evenSum, oddSum);
    return 0;
}