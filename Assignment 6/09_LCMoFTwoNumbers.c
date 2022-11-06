// 9. Write a program to calculate LCM of two numbers
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    int LCM = 1;
    int copnum1 = num1, copnum2 = num2, i = 2;
    while (copnum1 > 1 || copnum2 > 1)
    {
        if (copnum1 % i != 0 && copnum2 % i != 0)
        {
            i++;
        }
        else
        {
            if (copnum1 % i == 0 && copnum2 % i == 0)
            {
                LCM = LCM * i;
                copnum1 = copnum1 / i;
                copnum2 = copnum2 / i;
            }
            else if (copnum2 % i == 0)
            {
                LCM = LCM * i;
                copnum2 = copnum2 / i;
            }
            else if (copnum1 % i == 0)
            {
                LCM = LCM * i;
                copnum1 = copnum1 / i;
            }
        }
    }
    printf("The LCM of %d and %d is: %d", num1, num2, LCM);
    return 0;
}