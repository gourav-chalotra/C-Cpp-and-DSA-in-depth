// 6. Write a program to sort elements of an array of size 10. Take array values from the user.

// Bubble Sorting

#include <stdio.h>
int main()
{
    int Arr[10], i = 0, temp;
    printf("Enter 10 value\n");
    for (i; i < 10; i++)
    {
        scanf("%d", &Arr[i]);
    }
    for (i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
    printf("\n\nAfter Sorting\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ",Arr[i]);
    }
    printf("\n");
    
}