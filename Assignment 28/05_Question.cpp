// 5. Create a student class and overload new and delete operators outside the class.

#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
void *operator new(size_t size)
{
    cout << "new called" << endl;
    void *ptr = malloc(size);
    return ptr;
}
void operator delete(void *s,string *ptr)
{
    cout << "delete called" << endl;
    free(ptr);
}

int main()
{
    student s;
    student *ptr_s = new student;
    ptr_s->name = "gourav";
    ptr_s->age = 21;
    ptr_s->display();
    delete ptr_s;
    return 0;
}