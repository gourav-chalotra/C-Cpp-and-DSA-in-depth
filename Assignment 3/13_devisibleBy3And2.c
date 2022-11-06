// 12. Write a program to check wether a give number is divisible by 3 and 2?
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(num % 2 == 0 && num % 3 == 0)
    {
        printf("The number %d is divisible by 2 and 3",num);
    }
    else
    {
        printf("The number %d is n0t divisible by 2 and 3",num);
    }
}