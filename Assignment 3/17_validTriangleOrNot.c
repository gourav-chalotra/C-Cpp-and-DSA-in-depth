// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.
#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter the sides of a triangle: ");
    scanf("%d%d%d",&side1,&side2,&side3);

    if(side1+side2 > side3)
    {
        printf("The triangle is a valid triangle\n");
    }
    else
    {
        printf("It is not a valid tiangle\n");
    }
    return 0;
}