// 7. Write a recursive function to print squares of first N natural numbers
#include <stdio.h>
void squareOfN(int n)
{
    if (n != 1)
    {
        squareOfN(n - 1);
    }
    printf("%d ", n * n);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    squareOfN(num);
    return 0;
}