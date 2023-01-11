// 3. Define a class Factorial and define an instance member function to find the Factorial of a
// number using class.
#include <iostream>
using namespace std;

class factorial
{
    int val;

public:
    void find_facto(int num)
    {
        val = num;
        int facto = 1;
        while (num)
        {
            facto = facto * num;
            num--;
        }
        cout << "factorial of " << val << " is " << facto << endl;
    }
};

int main()
{
    factorial f;
    f.find_facto(5);

    return 0;
}