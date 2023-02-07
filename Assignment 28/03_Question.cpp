// 3. Overload subscript operator [] that will be useful when we want to check for an index out
// of bound.
#include <iostream>
using namespace std;

class intArray
{
    int arr[100];
    int size = 100;

public:
    intArray()
    {
    }
    void setArray(int index, int value)
    {
        if (index >= size)
        {
            cout << "array index out of bound" << endl;
            exit(0);
        }
        arr[index] = value;
    }
    int displayArray(int index)
    {
        if (index >= size)
        {
            cout << "array index out of bound" << endl;
            exit(0);
        }
        cout << arr[index] << endl;
    }
    int operator[](int index)
    {
        if (index >= size)
        {
            cout << "Array index out of bound" << endl;
            exit(0);
        }
        return arr[index];
    }
};
int main()
{
    intArray a;
    a.setArray(8,12);
    // Array index out of bound
    cout << a[822];
    return 0;
}