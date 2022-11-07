// Write a program to print unit digit of a given number
#include <stdio.h>
int main()
{
    int num = 232;
    num %= 10;

    printf("The unit digit of number is %d\n", num);
    return 0;
}