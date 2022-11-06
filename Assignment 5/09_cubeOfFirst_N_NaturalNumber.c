// 9. Write a program to print cubes of the first N natural numbers
#include <stdio.h>
int main()
{
    int num ,i = 1;
    printf("Enter the value: ");
    scanf("%d",&num);

    while (i <= num)
    {
        printf(" %d ", i * i * i);
        i++;
    }
    return 0;
}