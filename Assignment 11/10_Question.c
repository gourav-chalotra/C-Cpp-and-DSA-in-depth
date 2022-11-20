// Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function
#include <stdio.h>
// sum = 1 + 1 + 
int facto(int n)
{
    int value = 1;
    for (int i = 1; i <= n; i++)
    {
        value = value * i;
    }
    return value;
}
int printSeries(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = facto(i) / i + sum;
    }q
    return sum;
}

int main()
{

    printf("The sum of the series is: %d", printSeries(5));
    return 0;

}