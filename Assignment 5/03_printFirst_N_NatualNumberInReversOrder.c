// 3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int num ;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        printf(" %d ",num);
        num--;
    }
    return 0;
}