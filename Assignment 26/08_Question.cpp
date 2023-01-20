// 8. Define a class Bank and define member functions to read principal , rate of interest and
// year. Another member functions to calculate simple interest and display it. Initialise all details
// using constructor.

#include <iostream>
using namespace std;

class Bank
{
    float principle, rateOfInterest, time;

public:
    Bank(float p, float RI, float t)
    {
        principle = p;
        rateOfInterest = RI;
        time = t;
    }
    float simpleInterest()
    {
        return principle*rateOfInterest*time;
    }
};
main()
{
    Bank ravi(5,2.1,3);
    cout << "Ravi simple interest is: " << ravi.simpleInterest() << endl;
    return 0;
}