// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);

    if(num&1)
        printf("Odd\n");
    else
        printf("Even\n");
    return 0;
}