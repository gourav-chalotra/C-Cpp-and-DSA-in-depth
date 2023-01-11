// Define a class LargestNumber and define an instance member function to find the 
// Largest of three Numbers using the class.

#include<iostream>
using namespace std;

class LargestNumber
{
    public:
        void larest_number_Int(int num1, int num2, int num3)
        {
            if(num1 > num2)
            {
                if(num1 > num3)
                {
                    cout << num1 << endl;
                }
                else
                {
                    cout << num3 << endl;
                }
            }
            else if(num2 > num3)
            {
                cout << num2 << endl;
            }
            else 
            {
                cout << num3 << endl;
            }
        }
        void larest_number_Float(double num1, double num2, double num3)
        {
            if(num1 > num2)
            {
                if(num1 > num3)
                {
                    cout << num1 << endl;
                }
                else
                {
                    cout << num3 << endl;
                }
            }
            else if(num2 > num3)
            {
                cout << num2 << endl;
            }
            else 
            {
                cout << num3 << endl;
            }
        }
};

int main()
{
    LargestNumber LG;
    LG.larest_number_Float(23.12,674.23,45.23);
    LG.larest_number_Int(4,2,23);
    return 0;
}