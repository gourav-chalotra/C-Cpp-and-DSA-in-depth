// 1. Write a recursive function to print first N natural numbers
#include <stdio.h>
void naturalNumber(int n)
{
    if (n != 1)
    {
        naturalNumber(n - 1);
    }
    printf("%d ", n);
}
int main()
{
    naturalNumber(10);
}