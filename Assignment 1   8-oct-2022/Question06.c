// WAP to print the name of the user in double quotes.
// Expected output format – “Hello , Amit Kumar”

#include<stdio.h>
int main()
{
    char name[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%c",&name[i]);
    }
    printf("\"Hello ,");
    for (int i = 0; i < 10; i++)
    {
        printf("%c",name[i]);
    }
    printf("\"");

    return 0;
}