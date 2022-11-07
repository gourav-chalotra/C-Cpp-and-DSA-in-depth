// Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
    int num = 2, num1 = 3, num2;
    printf("\nThe number are num ,num1 ,num2 is: %d ,%d\n", num, num1);
    printf("\nafter Swapping\n");
    num2 = num;
    num = num1;
    num1 = num2;

    printf("\nThe number are num ,num1 is: %d ,%d\n\n", num, num1);
}