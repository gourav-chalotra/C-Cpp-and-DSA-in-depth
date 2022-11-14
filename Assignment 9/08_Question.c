// 8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        num = -(num);
        return num;
    }
    else
    {
        num = -num;
        return num;
    }
    printf("Number after coverting: %d", covertNtoPtoN(num));
    return 0;
}