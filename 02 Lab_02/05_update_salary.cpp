/*
Write a C++ function called updateEmployeeSalary that takes a reference parameter salary 
and increases it by a given percentage. In the main function, prompt the user to enter 
an employee's current salary and the percentage increase. Call the updateEmployeeSalary 
function, passing the entered salary and percentage increase. The function should modify 
the salary by increasing it based on the given percentage. Finally, print the original 
salary and the updated salary to verify the changes.
*/
#include<iostream>
using namespace std;

void updateEmployeeSalary(float &salary, float percentageIncrease){
    salary = salary + (salary * percentageIncrease / 100);
}   

int main(){
    float currentSalary, percentageIncrease;

    cout<<"Enter the current salary of the employee : ";
    cin>>currentSalary;
    cout<<"Enter the percentage increase : ";
    cin>>percentageIncrease;

    cout << "Current salary : " << currentSalary << endl;
    updateEmployeeSalary(currentSalary, percentageIncrease);
    cout << "Updated salary : " << currentSalary << endl;

    return 0;
}