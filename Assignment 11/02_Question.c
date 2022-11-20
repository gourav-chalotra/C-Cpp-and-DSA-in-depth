// 2. Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
int hcfofTwoNumber(int num1, int num2)
{
    int i = 2, hcf = 1;
    while (num1 != 1 && num2 != 1)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = hcf * i;
            num1 = num1 / i;
            num2 = num2 / i;
        }
        else if (num1 % i == 0)
        {
            num1 = num1 / i;
        }
        else if (num2 % i == 0)
        {
            num2 = num2 / i;
        }
        else
        {
            i++;
        }
    }
    return hcf;
}
int main()
{
    int HCF, num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the secound number: ");
    scanf("%d", &num2);

    HCF = hcfofTwoNumber(num1, num2);
    printf("The HCF of %d and %d is: %d", num1, num2, HCF);
    return 0;
}