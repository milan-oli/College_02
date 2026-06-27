// WAP to print the address of current object and initialize data members using this pointer.
#include <iostream>
#include <string>

using namespace std;
class pointThis
{
    int age;
    string name;

public:
    pointThis(int age, const string &name)
    {
        this->age = age;
        this->name = name;
    }
    void display()
    {
        cout << "Detail of Student : " << endl;
        cout << "Name : " << name << ", Age : " << age << endl;
        cout << "Address of Object using this pointer : " << this << endl;
    }
};

int main()
{
    pointThis T(20, "hari");
    T.display();
    cout << "Address of object without using this pointer : " << &T << endl;
    return 0;
}