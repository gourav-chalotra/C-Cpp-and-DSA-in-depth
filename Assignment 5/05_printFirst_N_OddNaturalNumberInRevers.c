// 5. Write a program to print the first 10 odd natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int num, i = 1, j = 1;
    printf("Enter the value: ");
    ;
    scanf("%d", &num);

    while (i <= num)
    {
        if (j % 2)
        {
            i++;
        }
        j++;
    }

    while (j)
    {
        if (j % 2)
        {
            printf(" %d ", j);
        }
        j--;
    }

    return 0;
}