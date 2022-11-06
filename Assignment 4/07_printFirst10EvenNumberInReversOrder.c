// 7. Write a program to print the first 10 even natural numbers in reverse order
#include <stdio.h>
int main()
{
    int num = 0, i = 1;
    while (num < 10)
    {
        if (i % 2 == 0)
        {
            num++;
        }
        i++;
    }
    while (i)
    {
        if (i % 2 == 0)
        {
            printf(" %d ", i);
        }
        i--;
    }
    return 0;
}
