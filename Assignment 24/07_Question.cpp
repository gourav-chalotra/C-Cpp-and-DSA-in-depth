// 7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include <iostream>
using namespace std;
void add(int a, int b, int c = 0)
{
    cout << "sum is: " << a + b + c << endl;
}
int main()
{
    int x = 4, y = 1, z = 2;
    add(x, y);
    add(x, y, z);
    return 0;
}