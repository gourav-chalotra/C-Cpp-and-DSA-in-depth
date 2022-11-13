// 5. Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void oddPint(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            printf("%d ", i);
    }
}
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);

    oddPint(N);
    return 0;
}