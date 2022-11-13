// 4. Write a menu driven program with the following options:

// a. Check whether a given set of three numbers are lengths of an isosceles
// triangle or not

// b. Check whether a given set of three numbers are lengths of sides of a right
// angled triangle or not

// c. Check whether a given set of three numbers are equilateral triangle or not
// d. Exit

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int s1, s2, s3, choice;
    printf("\n\n\t\t\t\t ------- MENU DRIVEN ------- \n\n\n");

    printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not ?\n\n");
    printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not?\n\n");
    printf("3. Check whether a given set of three numbers are equilateral triangle or not?\n\n");
    printf("4. Exit\n\n\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the sides1 and side2 or side3 of triangle: ");
        scanf("%d%d%d", &s1, &s2, &s3);
        if (s1 == s2)
        {
            printf("It's a isosceles triangle\n");
        }
        else if(s1 == s3)
        {
             printf("It's a isosceles triangle\n");
        }
        else if(s2 == s3)
        {
             printf("It's a isosceles triangle\n");
        }
        else
        {
            printf("It's not a isosceles triangle\n");
        }
        break;
    case 2:
        printf("Enter the sides1 and side2 or side3 of triangle: ");
        scanf("%d%d%d", &s1, &s2, &s3);
        if ((s1 * s1) + (s2 * s2) == (s3*s3))
        {
            printf("It's right anguled triangle\n");
        }
        else
        {
            printf("It's not a right anguled triangle\n");
        }
        break;
    case 3:
        printf("Enter the sides of triangle: ");
        scanf("%d%d%d", &s1, &s2, &s3);
        if (s1 == s2 && s1 == s3)
        {
            printf("It's a equilateral triangle\n");
        }
        else
        {
            printf("It's not a equilateral triangle\n");
        }
    case 4:
        exit(0);
    default:
        printf("Please enter the valid integer value \n");
        break;
    }
    return 0;
}