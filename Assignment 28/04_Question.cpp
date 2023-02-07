#include <iostream>
using namespace std;

class Student
{
    string name;
    int id;
    int rollno;
    int totalSubjMarks;

public:
    Student()
    {
        cout << "Constructor is called" << endl;
    }
    Student(string Name, int ID, int Rn, int TSM)
    {
        cout << "perameterized constructor called " << endl;
        name = Name;
        id = ID;
        rollno = Rn;
        totalSubjMarks = TSM;
    }
    void displayStudent()
    {
        cout << "Name: " << name << endl;
        cout << "id: " << id << endl;
        cout << "Rollno: " << rollno << endl;
        cout << "Subject marks: " << totalSubjMarks << endl;
    }
    void *operator new(size_t size)
    {
        cout << "Overloading of new operator size is: " << size << endl;
        return malloc(size);
    }
    void operator delete(void *pt)
    {
        free(pt);
        cout << "deleted the pointer" << endl;
    }
};

int main()
{
    Student *s = new Student("Gourav", 3, 8008, 400);
    s->displayStudent();
    Student *t;
    delete (s);
    return 0;
}
