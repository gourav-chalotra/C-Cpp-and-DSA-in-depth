// 4. Write a recursive function to print first N odd natural numbers in reverse order
#include <stdio.h>
void OddNaturalNumber(int n)
{
    printf("%d ", n * 2 - 1);
    if (n != 1)
    {
        OddNaturalNumber(n - 1);
    }
}
int main()
{
    OddNaturalNumber(10);
}