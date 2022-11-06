// 8. Write a program to print squares of the first N natural numbers
#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf(" %d ", i * i);
        i++;
    }
    return 0;
}