// 7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)
#include <stdio.h>
int facto(int n)
{
    int facto = 1;
    for (int i = 1; i <= n; i++)
    {
        facto = facto * i;
    }
    return facto;
}
int comb(int n, int r)
{
    return facto(n) / (facto(r) * facto(n - r));
}
int main()
{
    printf("Combination = %d\n\n",comb(10,2));
}