// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0

#include <stdio.h>
int EvenOdd(int n);

int main()
{
    int num,EO;
    printf("Enter a number: ");
    scanf("%d", &num);
    EO = EvenOdd(num);

    printf("%d",EO);
    return 0;
}
int EvenOdd(int n)
{
    if (n % 2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}