// 8. Write a function to calculate the number of arrangements one can make from n items
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
int per(int n, int r)
{
    return facto(n) / facto(n-r);
}
int main()
{
    printf("permutation = %d\n\n",per(10,2));
}