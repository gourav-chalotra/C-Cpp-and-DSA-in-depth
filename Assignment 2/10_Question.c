// Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.(Example - number = 234 and digit = 9 then the resulting number is 2349)
#include <stdio.h>
int main()
{
    int num, digit;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the digit: ");
    scanf("%d", &digit);

    num *= 10;
    num += digit;
    printf("Number: %d\n", num);

    return 0;
}