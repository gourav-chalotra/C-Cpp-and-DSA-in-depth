// 9. Create an Integer class that contains int x as an instance variable and overload
// casting int() operator that will type cast your Integer class object to int data type.

#include<iostream>
using namespace std;

class Integer
{
    int x;
    public:
    Integer(int a)
    {
        x = a;
    }
    operator int ()
    {
        return x;
    }
};
int main()
{
    Integer i(3);
    int a = i;
    cout << a;
    return 0;
}