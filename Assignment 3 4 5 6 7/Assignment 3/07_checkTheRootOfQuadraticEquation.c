// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter coefficient of x^2 and constant term: ");
    scanf("%d%d%d", &a, &b, &c);

    int D = b * b - 4 * (a * c);

    if (D < 0)
    {
        printf("Both roots are imaginary\n");
    }
    else if (D == 0)
    {
        printf("Both roots are equal\n");
    }
    else
    {
        printf("Both roots are real & distinct\n");
    }
    return 0;
}