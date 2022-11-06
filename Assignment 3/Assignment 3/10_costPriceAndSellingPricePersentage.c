// 10. Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.

#include <stdio.h>
int main()
{
    float costPrice, sellingPrice;
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    float percentage = ((sellingPrice - costPrice) / costPrice) * 100;
    if (sellingPrice - costPrice > 0)
    {
        printf("The profit persentage is: %f", percentage);
    }
    else
    {
        printf("The loss persentage is: %f", -(percentage));
    }
    return 0;
}