// 2. Write a program to print the first N natural numbers
#include <stdio.h>
int main()
{
    int num ;
    printf("Enter the number: ");
    scanf("%d", &num);
    int i = 1;
    while (i <= num)
    {
        printf(" %d ", i);
        i++;
    }
    return 0;
}