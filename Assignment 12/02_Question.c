// 2. Write a recursive function to print first N natural numbers in reverse order
#include <stdio.h>
void reverNaturalNumber(int n)
{
    printf("%d ", n);
    if (n != 1)
    {
        reverNaturalNumber(n - 1);
    }
}
int main()
{
    reverNaturalNumber(10);
    return 0;
}