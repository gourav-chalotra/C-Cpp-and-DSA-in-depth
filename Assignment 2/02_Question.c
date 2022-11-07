//  Write a program to print a given number without its last digit.
#include <stdio.h>
int main()
{
    int num = 235;
    printf("The number is %d\n",num);
    num/=10;
    printf("The number without its last digit is: %d", num);
    return 0;
}