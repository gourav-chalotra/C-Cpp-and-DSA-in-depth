// Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int i; 
    float f;
    char c;
    double d;

    printf("The size of int variable is: %d\n",sizeof(i));
    printf("The size of float variable is: %d\n",sizeof(f));
    printf("The size of char variable is: %d\n",sizeof(c));
    printf("The size of double variable is: %d\n",sizeof(d));

    return 0;
}