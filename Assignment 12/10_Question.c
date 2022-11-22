// 10. Write a recursive function to print reverse of a given number
#include <stdio.h>
void ReverseNumber(int n)
{
    
    if (n != 0)
        printf("%d", n % 10);
        ReverseNumber(((n) - (n % 10)) / 10);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    ReverseNumber(n);
    return 0;
}