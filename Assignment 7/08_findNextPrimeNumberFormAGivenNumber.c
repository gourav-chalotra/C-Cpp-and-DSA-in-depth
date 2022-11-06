// Write a program to find next Prime number of a given number
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = num + 1; i > 0; i++)
    {
        int j = 2;
        for (j; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            printf(" %d ", i);
            break;
        }
    }

    return 0;
}