// Program to check whether a year is a leap year or not. Using switch statement

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    int r = year % 400 == 0 || year % 100 == 0 || year % 4 == 0;
    switch (r)
    {
    case 1:
        printf("leap year");
        break;
    case 0:
        printf("not a leap year");
        break;
    default:
        printf("not a leap year");
        break;
    }
}