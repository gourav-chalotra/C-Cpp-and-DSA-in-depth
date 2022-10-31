// 8. Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (!(year % 4))
        printf("\nit is a leap year!\n\n");
    else
        printf("\nit is not a leap year!\n\n");
    return 0;
}