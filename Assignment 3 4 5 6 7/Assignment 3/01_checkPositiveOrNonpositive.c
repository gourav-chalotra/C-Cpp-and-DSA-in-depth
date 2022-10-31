// 1. Write a program to check whether a given number is positive or non positive
#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x>0)
        printf("Positive number\n");
    else
        printf("non Positive number\n");

    return 0;
}