// 1. Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>
int sumOfFirstNaturalNo(int n)
{
    if (n != 1)
    {
        return n + sumOfFirstNaturalNo(n - 1);
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int sum = sumOfFirstNaturalNo(num);
    printf("The sum of first %d number is: %d", num, sum);
}