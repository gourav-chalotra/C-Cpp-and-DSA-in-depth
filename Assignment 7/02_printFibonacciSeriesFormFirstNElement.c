// 2. Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the position: ");
    scanf("%d", &n);

    int prev = 0, current = 1;
    int count = 1;
    int Tvalue = 0;
    if (n == 1)
    {
        printf("%d ", 0);
    }
    else if (n == 2)
    {
        printf("%d ", 1);
    }
    else if (n > 2)
    {
        printf("%d ", 0);
        printf("%d ", 1);
        while (count <= n - 2)
        {
            Tvalue = current + prev;
            printf("%d ", Tvalue);
            prev = current;
            current = Tvalue;
            count++;
        }
    }
    return 0;
}