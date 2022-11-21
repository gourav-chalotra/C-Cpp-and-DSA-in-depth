// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include <stdio.h>

void printFibo(int n)
{
    int i = 1, j = 0;
    if (n == 1)
    {
        printf("%d", 0);
    }
    else if (n == 2)
    {
        printf("%d %d", 1, 2);
    }
    else if (n > 2)
    {
        printf("%d %d",0,1);
        for (int k = 3; k <= n; k++)
        {
            printf(" %d",i+j);
            j = i;
            i = i + j;
        }
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printFibo(n);
    return 0;
}