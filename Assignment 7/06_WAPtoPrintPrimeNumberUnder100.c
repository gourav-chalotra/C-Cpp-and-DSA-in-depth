// 6. Write a program to print all Prime numbers under 100
#include <stdio.h>
int main()
{
    for(int i = 2; i < 100; i++)
    {
        int j = 2;
        for (j; j < i; j++)
        {
            if (i % j == 0)
            {
                break;;
            }
        }
        if(j == i)
        {
            printf(" %d ", i);
        }
    }

    return 0;
}