#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value: ");
    scanf("%d",&num);

    int count = 0;
    while(num)
    {
        count++;
        int result = num & 1;
        if(result)
        {
            break;
        }
        else
        {
            num = num>>1;   
        }
    }
    if(count)
    {
        printf("The position where of first 1 in LSB is : %d",count);
    }
    else
    {
        printf("The value is Zero");
    }
    return 0;
}