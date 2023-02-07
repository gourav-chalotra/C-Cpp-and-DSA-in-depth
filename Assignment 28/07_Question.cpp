// 7. Create an Integer class and overload not operator for that class.

#include <iostream>
using namespace std;

class Integer
{
    int num;

public:
    Integer(int num)
    {
        this->num = num;
    }
    Integer operator!(void)
    {
        this->num = !(this->num);
        return *this;
    }
    void display()
    {
        cout << "num is: " << num << endl;
    }
};

int main()
{
    Integer t = 0;
    t.display();
    !t;
    t.display();
}