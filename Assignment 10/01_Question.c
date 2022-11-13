// 1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float circleArea(float);
int main()
{
    float r,Carea;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);

    Carea = circleArea(r);
    printf("The area of the circle is: %.2f",Carea);
    return 0;
}
float circleArea(float r)
{
    float Carea = 3.14*r*r; 
    return Carea;
}