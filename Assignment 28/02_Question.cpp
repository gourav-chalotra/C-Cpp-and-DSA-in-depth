// Define a class Complex with appropriate instance variables and member functions. One
// of the functions should be setData() to set the properties of the object. Make sure the
// names of formal arguments are the same as names of instance variables.

#include <iostream>
using namespace std;

class Complex
{
    int real, imagenary;

public:
    // 1.  Initializer list  use (important pont --> only construtor can use Initializer list)
    Complex(int real, int imagenary) : real(real), imagenary(imagenary)
    {
    }
    void displayData()
    {
        cout << "real: " << this->real << " imagnary: " << this->imagenary << endl;
    }
};

int main()
{
    Complex c(14, 4);
    c.displayData();
    return 0;
}