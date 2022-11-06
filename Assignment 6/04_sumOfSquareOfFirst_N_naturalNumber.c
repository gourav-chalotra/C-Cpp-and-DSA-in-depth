// 4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int num,sum = 0;
    printf("Enter the value: ");
    scanf("%d",&num);

    int i = 1;
    while(i <= num)
    {
        sum = sum + (i*i);
        i++;
    }
    printf("Sum is: %d",sum);
    return 0;
}