// 2. Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
int sumOfOddNaturalNo(int n)
{
    if (n != 1)
    {
        return n * 2 - 1 + sumOfOddNaturalNo(n - 1);
    }
    return n;
}
int main()
{
    int num, sum;
    printf("Enter the number: ");
    scanf("%d", &num);

    sum = sumOfOddNaturalNo(num);

    printf("The sum of first %d odd natural number is: %d", num, sum);
    return 0;
}