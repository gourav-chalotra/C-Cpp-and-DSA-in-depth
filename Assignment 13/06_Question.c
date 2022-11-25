// 6. Write a recursive function to calculate factorial of a given number
#include <stdio.h>
int factoOfN(int n)
{
    if (n != 1)
    {
        n = n * factoOfN(n - 1);
        return n;
    }
    return 1;
}
int main()
{
    int num, sum;
    printf("Enter the number: ");
    scanf("%d", &num);
    sum = factoOfN(num);
    printf("The factorial of %d is %d", num, sum);

    return 0;
}