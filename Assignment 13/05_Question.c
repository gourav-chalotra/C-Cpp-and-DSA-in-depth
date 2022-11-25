// 5. Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
int sumOfDigit(int n)
{
    if (n != 0)
    {
        n = n % 10 + sumOfDigit(n = (n - n % 10) / 10);
        return n;
    }
    return 0;
}
int main()
{
    int num, sum;
    printf("Enter the number: ");
    scanf("%d", &num);

    sum = sumOfDigit(num);
    printf("The sum of digit of %d is %d", num, sum);
}