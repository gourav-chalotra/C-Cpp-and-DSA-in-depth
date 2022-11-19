// 9. Write a program in C to find the square of any number using the function.
#include <stdio.h>
int sqOfNumber(int num)
{
    return num * num;
}

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    printf("%d ", sqOfNumber(num));
    return 0;
}