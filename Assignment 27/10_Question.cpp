// 10. Class Matrix
// {
//  int a[3][3];
//  Public:
//  //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).
// Output
#include <iostream>
using namespace std;

class Matrix
{
    int a[3][3];

public:
    void setMatrix()
    {
        cout << "Enter elements:" << endl;
        int i = 0, j = 0;
        for(i; i < 3; i++)
        {
            for(j = 0; j < 3 ; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void displayMatrix()
    {
        cout << "\n\n";
        cout << "Matrix are: " << endl;
        int i = 0, j = 0;
        for (i; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << "\t" << a[i][j];
            }
            cout << "\n"
                 << endl;
        }
        cout << "\n\n";
    }
    Matrix operator+(const Matrix &t)
    {
        Matrix temp;
        int i = 0, j = 0;
        for (i; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                temp.a[i][j] = a[i][j] + t.a[i][j];
            }
        }
        return temp;
    }
};

int main()
{
    Matrix x, y, z;
    x.setMatrix();
    x.displayMatrix();
    y.setMatrix();
    y.displayMatrix();
    z = x + y;

    z.displayMatrix();
    return 0;
}