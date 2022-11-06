// 5. Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
    int num,num1;
    printf("Enter two numbers: ");
    scanf("%d%d",&num,&num1);

    int count = 2;
    int check = 1;
    while (count <= num/2||count <= num1/2)
    {
        if(num%count == 0 && num1%count == 0)
        {
            check = 0;
            break;
        }
        else if(num%count == 0 || num1%count == 0)
        {
            if(num%count == 0)
            {
                num = num / count;
            }
            else if(num1%count == 0)
            {
                num1 = num1 / count;
            }
        }
        else 
        {
            count++;
        }
    }
    if(!check)
    {
        printf("\nThe value is not a co-prime number\n");
    }
    else 
    {
        printf("\nThe value is co-prime number\n");
    }
    
}