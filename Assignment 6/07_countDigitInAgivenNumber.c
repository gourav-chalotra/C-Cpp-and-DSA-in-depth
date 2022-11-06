// 7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int digit,count = 0;
    printf("Enter a digit: ");
    scanf("%d",&digit);
    while (digit)
    {
        count++;
        digit = digit/10;
    }
    printf("Given number digit are: %d",count);
    
    return 0;
}