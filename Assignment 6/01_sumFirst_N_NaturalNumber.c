// 1. Write a program to calculate sum of first N natural numbers
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
        sum = sum + i;
    printf("Sum of N natural number is %d\n", sum);
    return 0;
}