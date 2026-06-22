/*
Write a program that manages an array of student objects. 
Each student object contains a name and age. The program should 
prompt the user to enter the number of students and their respective 
names and ages. Afterward, calculate and display the average age of all 
the students. Furthermore, find and print the name of the oldest student 
in the array. Provide the code to implement this program, including the 
necessary class definition and the logic to calculate the average age and 
find the oldest student.
*/
#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int age;

    public:
       
        void input(){
            cout << "Enter your Name : ";
            cin >> name;
            cout << "Enter your Age : ";
            cin >> age;
        }

        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }

};

int main(){
    int n;
    cout << "Enter number of student : ";
    cin >> n;

    student s1[n];

    double avg_age = 0;
    int oldestAge = 0;
    string oldestStudent;

    for(int i = 0; i < n; i++){
        s1[i].input();
        avg_age += s1[i].getAge() ;

    if(s1[i].getAge() > oldestAge){
        oldestAge = s1[i].getAge();
        oldestStudent = s1[i].getName(); 
        }
    }
    avg_age = avg_age / n;

    cout << "\nAverage Age = "<< avg_age << endl;
    cout <<"Oldest Student = " << oldestStudent << endl;
    return 0;
}