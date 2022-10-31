//4.  Take radius of circle from user as input and print the result in below given format.
#include<stdio.h>
int main()
{
    float circleRadius;
    printf("Enter the radious: ");
    scanf("%f",&circleRadius);

    float pi = 3.14;
    float circleArea = pi*(circleRadius*circleRadius);
    printf("Area of circle is %f having the radius %f.",circleArea,circleRadius);
}