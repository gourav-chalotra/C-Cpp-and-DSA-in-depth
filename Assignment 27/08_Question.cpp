// 8. Consider a class Matrix
// Class Matrix
// {
//  int a[3][3];
//  Public:
//  //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object

#include <iostream>
using namespace std;

class Matrix
{
    int a[3][3];

public:
    void displayMatrix()
    {
        cout << "Matrix is: " << endl;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << "\t" << a[i][j];
            }
            cout << endl;
        }
    }
    Matrix &operator-()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                a[i][j] = (-1 * a[i][j]);
            }
        }
        return *this;
    }
    void setElement()
    {
        cout << "Enter element's values: " << endl;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
};

int main()
{
    Matrix X;
    X.setElement();
    X.displayMatrix();
    -X;
    cout << "\n\tAfter X-\n"<<endl;
    X.displayMatrix();

    return 0;
}