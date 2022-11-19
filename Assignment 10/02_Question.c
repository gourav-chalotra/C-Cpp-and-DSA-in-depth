// 2. Write a function to calculate simple interest. (TSRS)
#include <stdio.h>
float simpleInterest(float P, float R, float T)
{
    return (P * R * T)/100;
}
int main()
{
    float P, R, T, si;
    printf("The the principle: ");
    scanf("%f", &P);

    printf("The the Rate: ");
    scanf("%f", &R);

    printf("The the Time: ");
    scanf("%f", &T);

    si = simpleInterest(P, R, T);
    printf("The simple interest is: %0.2f", si);

    return 0;
}