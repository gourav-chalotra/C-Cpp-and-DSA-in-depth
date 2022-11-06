// 10. Write a program to reverse a given number
#include <stdio.h>
int main()
{
    int value, position = 1;
    printf("Enter the value: ");
    scanf("%d", &value);
    int copValue = value;

    while (copValue)
    {
        position = position * 10;
        int lastDigit = copValue % 10;
        copValue = copValue - lastDigit;
        copValue = copValue / 10;
    }
    int reverValue = 0;
    position = position / 10;
    while (value)
    {
        int lastDigit = value % 10;
        reverValue = lastDigit * position + reverValue;
        value = value - lastDigit;
        value = value / 10;
        position = position / 10;
    }

    printf("The revers value is %d\n", reverValue);
}