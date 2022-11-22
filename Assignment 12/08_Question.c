// 8. Write a recursive function to print binary of a given decimal number
#include <stdio.h>
void Dno(int n)
{
    if (n != 1)
    {
        Dno(n / 2);
    }
    printf("%d ", n % 2);
}
int main()
{
    int num;
    printf("Enter the decimal number: ");
    scanf("%d", &num);

    Dno(num);

    return 0;
}