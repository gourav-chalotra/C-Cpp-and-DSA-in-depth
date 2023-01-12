#include <iostream>
using namespace std;
class reversDigit
{
    int revers_val = 0;
    int user_val;
public:
    void reversVal(int num)
    {
        revers_val;
        user_val = num;
        while (num != 0)
        {
            int digit = num % 10;
            revers_val = revers_val * 10 + digit;
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
