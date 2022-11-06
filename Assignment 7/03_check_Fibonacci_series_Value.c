// 3. Write a program to check whether a given number is there in the Fibonacci series or
// not.
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
        printf("present ");
    }
    else if (n == 0)
    {
        printf("present ");
    }
    else
    {
        while (count <= n)
        {
            Tvalue = current + prev;
            prev = current;
            current = Tvalue;
            if (Tvalue == n)
            {
                printf("Present %d", n);
                break;
            }
            count++;
        }
        if (Tvalue != n)
        {
            printf("not present\n");
        }
    }
    return 0;
}