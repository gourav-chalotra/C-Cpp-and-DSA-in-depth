#include<stdio.h>
int main()
{
    int x = 34234;
    printf("\nbefor\n");
    printf("x: %d\n",x);
    x/=10;
    x*=10;
    printf("\nAfter\nThe number is: %d\n\n",x);
    
    return 0;
}