// pascial triangle
#include <iostream>
using namespace std;
int factorial(int num);

void printPscial(int line);

int main()
{
    int num;
    cout << "Enter number of row's you want : ";
    cin >> num;
    printPscial(num);
}

int factorial(int num)
{
    int i = 1, fact = 1;
    while (i <= num)
    {
        fact = i * fact;
        i++;
    }
    return fact;
}

int combi(int num, int r)
{
    return (factorial(num) / factorial(num - r) / factorial(r));
}
void printPscial(int line)
{
    for (int i = 0; i < line; i++)
    {
        int k = 1;
        int r = 0;
        for (int j = 0; j < line * 2 - 1; j++)
        {
            if (j >= line - 1 - i && j <= line - 1 + i && k)
            {
                cout << combi(i, r);
                k = 0;
                r++;
            }
            else
            {
                cout << " ";
                k = 1;
            }
        }
        cout << endl;
    }
}