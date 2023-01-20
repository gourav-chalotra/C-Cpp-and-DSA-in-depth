// 9. Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.

#include<iostream>
using namespace std;

class Bill
{
    float unit;
    public:
        void get(float unit)
        {
            this->unit = unit;
        }
        float calculateBill()
        {
            if(unit < 100)
            {
                return unit*1.20;
            }
            else if(unit >= 100 && unit <= 200)
            {
                return unit*2;
            }
            else if(unit > 200)
            {
                return unit*3;
            }
        }
};
int main()
{
    Bill B;
    B.get(298.3);
    cout << "The Bill is: " << B.calculateBill();
    return 0;
}