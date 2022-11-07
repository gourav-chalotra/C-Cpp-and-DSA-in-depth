// Write a program to input a three digit number and display the sum of the digits
#include <stdio.h>
int main()
{
    int num;
    printf("Enter thr three digit number: ");
    scanf("%d", &num);
    int sum = 0;
    sum = sum + (num % 10);
    num /= 10;
    sum = sum + (num % 10);
    num /= 10;
    sum = sum + (num % 10);

    printf("The sum of the three digit number is: %d",sum);
    return 0;
}
