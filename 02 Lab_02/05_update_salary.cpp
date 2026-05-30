
#include<iostream>
using namespace std;

float updateEmployeeSalary(float currentSalary, float percentageIncrease){
    return currentSalary + (currentSalary * percentageIncrease / 100);
}   

int main(){
    float currentSalary, percentageIncrease;

    cout<<"Enter the current salary of the employee : ";
    cin>>currentSalary;
    cout<<"Enter the percentage increase : ";
    cin>>percentageIncrease;

    cout << "Current salary : " << currentSalary << endl;
    cout << "Updated salary : " << updateEmployeeSalary(currentSalary, percentageIncrease) << endl;

    return 0;
}