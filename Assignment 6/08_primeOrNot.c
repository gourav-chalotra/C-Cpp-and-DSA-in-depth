// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int num,i = 2;
    printf("Enter the value: ");
    scanf("%d",&num);

    for (i; i < num; i++)
    {
        if(num%i == 0)
        {
            printf("It is not a prime number.\n");
            break;
        }
    }
    if(i == num)
    {
        printf("it is a prime number\n");
    }

    return 0;
}