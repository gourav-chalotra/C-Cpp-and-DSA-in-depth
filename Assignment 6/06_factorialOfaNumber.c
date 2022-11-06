// 6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int num,sum = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num)
    {
        sum = sum + num;
        num--;
    }

    printf("\nSum is %d",sum);
    return 0;
}