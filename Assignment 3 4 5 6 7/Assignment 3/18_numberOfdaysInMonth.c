// 18. Write a program which takes the month number as an input and d:play number of
// days in that month.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month number: ");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
        printf("total days in January month: %d",31);
        break;
    case 2:
        printf("total days in February month: %d",29);
        break;
    case 3:
        printf("total days in March month: %d",31);
        break;
    case 4:
        printf("total days in April month: %d",30);
        break;
    case 5:
        printf("total days in May month: %d",31);
        break;
    case 6:
        printf("total days in June month: %d",30);
        break;
    case 7:
        printf("total days in July month: %d",31);
        break;
    case 8:
        printf("total days in August month: %d",31);
        break;
    case 9:
        printf("total days in Septmber month: %d",30);
        break;
    case 10:
        printf("total days in October month: %d",31);
        break;
    case 11:
        printf("total days in November month: %d",30);
        break;
    case 12:
        printf("total days in December month: %d",31);
        break;
    default:
        printf("Enter the valid month number!\n");
        break;
    }
    return 0;
}