// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    printf("\t------Welcome to menu------\t\n\n\n choose the opetions\n\n1.Addition (1)\n2.Subtraction(2)\n3.Multiplication(3)\n4.Division(4)\n5.Exit(5)\n\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    int a, b;
    case 1:
        printf("Enter two number: ");
        scanf("%d%d", &a, &b);
        printf("The sum of %d and %d number is: %d", a, b, a + b);
        break;
    case 2:
        printf("Enter two number: ");
        scanf("%d%d", &a, &b);
        printf("The subtraction of %d and %d number is: %d", a, b, a - b);
        break;
    case 3:
        printf("Enter two number: ");
        scanf("%d%d", &a, &b);
        printf("The multiplication of %d and %d number is: %d", a, b, a*b);
        break;
    case 4:
        printf("Enter two number: ");
        scanf("%d%d", &a, &b);
        printf("The division of %d and %d number is: %d", a, b, a/b);
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("Enter valid values ;) ");
        break;
    }

    return 0;
}