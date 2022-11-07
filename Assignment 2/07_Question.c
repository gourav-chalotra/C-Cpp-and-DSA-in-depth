/* Write a program to check whether the given number is even or odd using a bitwise
operator.*/
#include <stdio.h>
int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);
    if (num & 1)
    {
        printf("Odd\n");
    }
    else
    {
        printf("Even\n");
    }
    return 0;
}