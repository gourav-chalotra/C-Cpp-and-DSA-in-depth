// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>
int LCMofTwoNumber(int num1, int num2)
{
    int dv = 2, lcm = 1;
    while (num1 != 1 && num2 != 1)
    {
        if (num1 % dv == 0 && num2 % dv == 0)
        {
            lcm = lcm * dv;
            num1 = num1 / dv;
            num2 = num2 / dv;
        }
        else if (num1 % dv == 0)
        {
            lcm = lcm * dv;
            num1 = num1 / dv;
        }
        else if (num2 % dv == 0)
        {
            lcm = lcm * dv;
            num2 = num2 / dv;
        }
        else
        {
            dv++;
        }
    }
    return lcm;
}
int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the secound number: ");
    scanf("%d", &num2);

    int LCM = LCMofTwoNumber(num1, num2);

    printf("The LCM of %d and %d is: %d", num1, num2, LCM);

    return 0;
}