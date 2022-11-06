// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.

#include <stdio.h>
int main()
{
    char character;
    scanf("%c", character);

    if (character >= 65 && character <= 90)
    {
        printf("It is a upper case alphabet\n");
    }
    else if (character >= 97 && character <= 122)
    {
        printf("It is a lower case alphabet\n");
    }
    else if (character >= 48 && character <= 57)
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("Symbol\n");
    }

    return 0;
}