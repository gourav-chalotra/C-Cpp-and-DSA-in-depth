// Write a program to swap values of two int variables without using a third variable
#include <stdio.h>
int main()
{
    int num = 51;
    int num1 = 96;
    printf("\nThe value of num and num1 is: %d ,%d\n", num, num1);
    num = num + num1;
    num1 = num - num1;
    num = num - num1;

    printf("\nThe value of num and num1 is: %d ,%d", num, num1);
    return 0;
}