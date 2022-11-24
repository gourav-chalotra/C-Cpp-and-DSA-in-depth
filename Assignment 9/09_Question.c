// 9. Program to Convert even number into its upper nearest odd number Switch
// Statement.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    switch(num%2)
    {
        case 0:
            num++;
            break;
        case 1:
            num+=2;
            break;
    }
    printf("Number is: %d",num);
    
    return 0;
}
