// 3. Write a recursive function to calculate sum of first N even natural numbers
#include <stdio.h>
int sumEven(int n)
{
       //10!=1
    if (n != 0)
    {

        return n * 2 + sumEven(n - 1);
    }
    return 0;
}
int main()
{
    int num, sum;
    printf("Enter the number: ");
    scanf("%d", &num);

    sum = sumEven(num);
    printf("%d ", sum);
    return 0;
}