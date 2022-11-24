//4. Write a recursive function to calculate sum of squares of first n natural numbers

#include <stdio.h>
int squareSumOfNaturalNo(int n)
{
    if (n != 1)
    {

        return n * n + squareSumOfNaturalNo(n - 1);
    }
    return 1;
}
int main()
{
    int num, sum;
    printf("Enter the number: ");
    scanf("%d", &num);

    sum = squareSumOfNaturalNo(num);
    printf("%d ", sum);
    return 0;
}