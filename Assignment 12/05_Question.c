// 5. Write a recursive function to print first N even natural numbers
#include <stdio.h>
void EvenNaturalNumber(int n)
{
    if (n != 1)
        EvenNaturalNumber(n - 1);
    printf("%d ", n * 2);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    EvenNaturalNumber(num);
    return 0;
}