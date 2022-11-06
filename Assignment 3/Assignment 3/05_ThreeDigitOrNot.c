// 5. Write a program to check whether a given number is a three digit number or not.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int count = 0;

    while (num)
    {
        count++;
        num = num / 10;
    }
    if(count == 3)
        printf("it is a three digit number\n");
    else
        printf("it is not a three digit number\n");
    return 0;
}