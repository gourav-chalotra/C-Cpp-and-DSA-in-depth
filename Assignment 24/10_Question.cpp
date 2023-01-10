// 10. Write functions using function overloading to add two numbers having different data types
#include <iostream>
using namespace std;
void add(int a, float b)
{
    cout << "sum is: " << a + b << endl;
}
void add(int num, double num1)
{
    cout << "sum is: " << (double)num + num1 << endl;
}

int main()
{
    int num1 = 342;
    double num2 = 34345.4534;
    float num3 = 45353.453;

    add(num1,num3);
    add(num1,num2);

    return 0;
}