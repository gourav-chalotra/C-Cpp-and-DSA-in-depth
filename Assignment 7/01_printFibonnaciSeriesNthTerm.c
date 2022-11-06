// 1. Write a program to find the Nth term of the Fibonnaci series
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the position: ");
    scanf("%d", &n);

    int prev = 0, current = 1;
    int count = 1;
    int Tvalue = 0;
    if (n == 2 || n == 3)
    {
        printf("The value at %d position is %d\n", n, 1);
    }
    else if (n == 0)
    {
        printf("The value at %d position is %d\n", n, 0);
    }
    else
    {
        while (count <= n - 2)
        {
            Tvalue = current + prev;
            prev = current;
            current = Tvalue;
            count++;
        }
        printf("The value at %d position is %d\n", n, Tvalue);
    }
    return 0;
}