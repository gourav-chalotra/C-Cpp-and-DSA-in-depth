// 1. Write a program to print MySirG N times on the screen

#include <stdio.h>
int main()
{
    int num ;
    printf("Enter the number: ");
    scanf("%d", &num);
    int i = 1;
    while (i <= num)
    {
        printf("MySirG\n");
        i++;
    }
    return 0;
}