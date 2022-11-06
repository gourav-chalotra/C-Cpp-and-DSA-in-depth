// 4. Write a program to print the first 10 odd natural numbers
#include <stdio.h>
int main()
{
    int num = 0, i = 1;
    while (num != 10)
    {
        if (i % 2)
        {
            num++;
            printf(" %d ", i);
        }
        i++;
    }
    return 0;
}