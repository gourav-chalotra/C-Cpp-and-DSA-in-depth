// 6. Write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>
int facto(int n)
{
    int facto = 1;
    for (int i = 1; i <= n; i++)
    {
        facto = facto * i;
        printf("%d",facto);
    }
    return facto;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factorial of %d is: %d", n, facto(n));
    return 0;
}