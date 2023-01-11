#include <iostream>
using namespace std;
class reversDigit
{
    int revers_val = 0;
    int user_val;
public:
    void reversVal(int num)
    {
        user_val = num;
        int num_cp = num;
        int place = 0;
        while (num_cp)
        {
            place++;
            num_cp = num_cp - (num_cp % 10);
            num_cp /= 10;
        }
        int i = 1, tens = 1;
        while (i < place)
        {
            tens = tens * 10;
            i++;
        }
        while (num)
        {
            int digit = num % 10;
            revers_val = digit * tens + revers_val;
            num = num - digit;
            tens = tens/10;
            num /= 10;
        }
    }
    void displayRevers()
        {
            cout <<"The user value: " << user_val << endl;
            cout <<"The revers value: "<< revers_val << endl;
        }
};
int main()
{
    reversDigit rd;
    rd.reversVal(789);
    rd.displayRevers();
    return 0;
}