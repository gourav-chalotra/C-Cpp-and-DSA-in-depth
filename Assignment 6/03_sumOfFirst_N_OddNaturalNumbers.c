// 3. Write a program to calculate sum of first N odd natural numbers
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the value: ");
    scanf("%d", &num);
    int i = 0, sum = 0,j = 1;
    while (i < num)
    {
        if (j % 2)
        {
            i++;
            sum = sum + j;
        }
        j++;
    }

    printf("The sum of value are: %d",sum);
}