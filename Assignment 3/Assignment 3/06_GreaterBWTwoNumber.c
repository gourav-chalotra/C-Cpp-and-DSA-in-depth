// 6. Write a program to print greater between two numbers. Print one number if both are
// the same.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first value: ");
    scanf("%d",&num1);
    printf("Enter the secound value: ");
    scanf("%d",&num2);

    if(num1 >= num2)
    {
        printf("%d",num1);
    }
    else{
        printf("%d",num2);
    }
    return 0;
}