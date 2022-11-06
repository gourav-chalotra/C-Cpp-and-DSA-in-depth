// 8. Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (!(year % 4))
        printf("\nit is not a leap year!\n\n");
    else if (year % 100)
        printf("leao year");
    else if (year % 400)
    {
        printf("Not a leap year");
    }
    else
    {
        printf("leap year");
    }
    return 0;
}