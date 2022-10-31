// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num % 7 == 0 || num % 3 == 0)
    {
        printf("The number %d is divisible by 7 and 3\n", num);
    }
    else
    {
        printf("The number %d is not divisible by 7 and 3\n", num);
    }
}