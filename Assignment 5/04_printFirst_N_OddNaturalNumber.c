// 4. Write a program to print the first N odd natural numbers
#include <stdio.h>
int main()
{
    int num ,i = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (i <= num)
    {
        if (i % 2)
        {
            num++;
            printf(" %d ", i);
        }
        i++;
    }
    return 0;
}