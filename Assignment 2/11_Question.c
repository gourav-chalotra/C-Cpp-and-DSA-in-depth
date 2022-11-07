#include<stdio.h>
int main()
{
    float oneUSD = 76.23,indRupee,usdAmount;//one USD is equal to 76.23 RS 
    printf("Enter the amount: ");
    scanf("%f",&indRupee);
    usdAmount = indRupee/oneUSD;

    printf("\nThe total amount in USD is: %\n",usdAmount);
    return 0;
}