// Write a program to check whether a given number is an Armstrong number or not
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int cpnum = num;
    int sumOfDigit = 0;
    while (num)
    {
        int digit = num % 10;
        sumOfDigit = sumOfDigit + (digit * digit * digit);
        num = num - digit;
        num = num / 10;
    }
    if(sumOfDigit == cpnum)
    {
        printf("%d is an Armstrong number\n",cpnum);
    }
    else
    {
        printf("Not a Armstrong number\n");
    }
}