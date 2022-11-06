// 10. Write a program to print a table of 5
#include <stdio.h>
int main()
{
    int num = 5;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);
    }
    return 0;
}