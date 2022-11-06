// 4. Write a program to calculate HCF of two numbers
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);
    int count = 2;
    int value = 1;
    while (count <= num1/2 || count <= num2/2)
    {
        if (num1 % count == 0 && num2 % count == 0)
        {
            value = value * count;
            num1 = num1 / count;
            num2 = num2 / count;
        }
        else if(num1 % count != 0 || num2 % count != 0)
        {
            count++;
        }
    }
    printf("The HCF of the give number is: %d ",value);
    return 0;
}