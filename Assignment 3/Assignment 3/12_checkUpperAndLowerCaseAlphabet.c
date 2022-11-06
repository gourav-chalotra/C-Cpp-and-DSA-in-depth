// 12. Write a program to check whether a given alphabet is in uppercase or lowercase
#include <stdio.h>
int main()
{
    char c;
    printf("Enter the alphabet: ");
    scanf("%c", &c);

    if (c >= 65 && c <= 90)
    {
        printf("It is a upper case alphabet\n");
    }
    else if(c >= 97 && c <= 122)
    {
        printf("It is a lower case alphabet\n");
    }
    return 0;
}