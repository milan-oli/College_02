/*
Create a C++ class called Student that represents a student with private member variables name and grade. 
Implement the following functionalities:
-> Define a constant member function called getName() that returns the name of the student.
-> Define a constant member function called getGrade() that returns the grade of the student.
-> Create a constant object of the Student class and initialize it with a name and grade.
-> Call the getName() and getGrade() functions on the constant object to retrieve and display the
    student's name and grade.
*/
#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    char grade;
    public:
    Student(const string &name , const char &grade){
        this -> name = name;
        this -> grade = grade;
    }

    string getName() const{
        return name;
    }
    char getGrade() const{
        return grade;
    }
};
int main(){
    const Student s1("Hari",'A');
    cout << "Student name : " << s1.getName() << ", Grade : " << s1.getGrade() << endl;
  
    return 0;
}