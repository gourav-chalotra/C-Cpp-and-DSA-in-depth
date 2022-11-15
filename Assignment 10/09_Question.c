// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include <stdio.h>
int checkDigit(int num, int targate)
{
    while (num)
    {
        int digit = num % 10;
        if (digit == targate)
        {
            return 1;
        }
        num = num - digit;
        num = num / 10;
    }
}
int main()
{
    int num, check = 0, targate;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the digit: ");
    scanf("%d", &targate);

    check = checkDigit(num, targate);
    switch (check)
    {
    case 1:
        printf("digit is contain");
        break;
    default:
        printf("digit is not contain");
    }
    return 0;
}