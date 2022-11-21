// 3. Write a recursive function to print first N odd natural numbers
#include <stdio.h>
void OddNaturalNumber(int n)
{
    if (n != 1)
    {
        OddNaturalNumber(n - 1);
    }
    printf("%d ", n * 2 - 1);
}
int main()
{
    OddNaturalNumber(10);
}