// 15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(num>0)
    {
        printf("Number is positive\n");
    }
    else if(num<0)
    {
        printf("Number is negitive\n");
    }
    else
        printf("Number is Zero\n");
        
    return 0;
}