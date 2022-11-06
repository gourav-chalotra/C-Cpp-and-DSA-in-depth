// 2. Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(num%5)
        printf("not divisible by 5\n");
    else
        printf("divisible by 5\n");

    return 0;
}