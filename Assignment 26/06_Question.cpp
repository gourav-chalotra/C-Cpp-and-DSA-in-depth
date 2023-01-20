// 6. Define a class student and write a program to enter student details using constructor and
// define member function to display all the details.

#include <iostream>
using namespace std;

class student
{
    string name;
    int id;
    long long phone_no;

public:
    student(string name, int id, long long phone_no)
    {
        this->name = name;
        this->id = id;
        this->phone_no = phone_no;
    }
    student()
    {
    }
    void showDetail()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "phone no. : " << phone_no << endl;
    }
};

int main()
{
    student s1("king",4,70075833122),s2("Gourav",1,9419787443),s3("Shanker",2,9419151112);

    s1.showDetail();
    s2.showDetail();
    s3.showDetail();
    return 0;
}