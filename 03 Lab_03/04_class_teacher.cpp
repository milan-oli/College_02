/*
WAP to create a class Teacher with data members teacher_id, teacher_name, department and 
subject_taught and create member functions for reading and displaying data members. 
At least one of the member function should be defined outside the class.
*/
#include<iostream>
#include<string>
using namespace std;
class Teacher{
    double teacher_id;
    string teacher_name;
    string department;
    string subject_taught;

    public:
    void reading(){
        cout<<"Enter Teacher Id : ";
        cin>>teacher_id;
        cout<<"Enter Teacher Name : ";
        cin>>teacher_name;
        cout<<"Enter Department : ";
        cin>>department;
        cout<<"Enter Subject Taught : ";
        cin>>subject_taught;
    }
    void display();
};
void Teacher::display(){
        cout<<"Teacher Id : "<<teacher_id<<endl;;
        
        cout<<"Teacher Name : "<<teacher_name<<endl;;
        
        cout<<"Department : "<<department<<endl;
        
        cout<<"Subject Taught : "<<subject_taught<<endl;
        
}
int main(){
    Teacher t1;
    t1.reading();
    t1.display();
    return 0;
}