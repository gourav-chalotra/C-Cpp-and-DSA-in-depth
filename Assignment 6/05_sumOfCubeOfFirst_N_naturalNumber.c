// 5. Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>
int main()
{
    int num,sum = 0,i = 1;
    printf("Enter the number: ");
    scanf("%d",&num);

    while(i <= num)
    {
        sum = sum + (i*i*i);
        i++;
    }
    printf("The sum of cubes of N natural numbers is %d\n",sum);
    return 0;
}