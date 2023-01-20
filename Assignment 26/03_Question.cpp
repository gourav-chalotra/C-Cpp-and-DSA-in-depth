// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor
#include <iostream>
using namespace std;

class Cube
{
    int side;
    int volume;

public:
    Cube(int side)
    {
        this->side = side;
        volume = side * side * side;
    }
    int getVolume()
    {
        return volume;
    }
};
int main()
{
    Cube c(2);
    cout << c.getVolume();
    return 0;
}