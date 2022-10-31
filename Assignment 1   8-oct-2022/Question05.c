// 5. WAP to calculate the length of String using printf function

#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    printf("Enter name: ");
    gets(name);
    int stringLength = strlen(name);

    printf("The length of the string is: %d",stringLength);
}