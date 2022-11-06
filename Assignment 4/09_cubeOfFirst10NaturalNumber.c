// 9. Write a program to print cubes of the first 10 natural numbers
#include <stdio.h>
int main()
{
    int num = 1;
    while (num <= 10)
    {
        printf(" %d ", num * num * num);
        num++;
    }
    return 0;
}