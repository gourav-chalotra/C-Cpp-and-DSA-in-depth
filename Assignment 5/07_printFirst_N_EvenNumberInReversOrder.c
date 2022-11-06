// Write a program to print the first N even natural numbers in reverse order
#include <stdio.h>
int main()
{
    int num, i = 1, j = 1;
    printf("Enter the value: ");
    ;
    scanf("%d", &num);

    while (i <= num)
    {
        if (j % 2 == 0)
        {
            i++;
        }
        j++;
    }

    while (j)
    {
        if (j % 2 == 0)
        {
            printf(" %d ", j);
        }
        j--;
    }

    return 0;
}