// 9. Write a recursive function to print octal of a given decimal number
#include <stdio.h>
void printOctalNumber(int num)
{
    if (num > 7)
    {
        printOctalNumber(num / 8);
    }
    printf("%d ", num % 8);
}
int main()
{
    int num;
    printf("Enter the decimal number: ");
    scanf("%d", &num);
    printf("The octal number is: ");
    printOctalNumber(num);
    return 0;
}