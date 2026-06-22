/*
WAP that defines a BankAccount class with private data members for the account number and balance. Include:
1) A default constructor to initialize values.
2) A parameterized constructor to set the account number and balance.
3) A method to display the balance.
4) A method that accepts a BankAccount object, applies 5% interest to its balance, and returns the updated object.
In the main() function, create an object with an initial balance and account number, apply interest using the method, 
and display the updated balance.
*/
#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    unsigned long int account_number;
    double balance;

    public:
        BankAccount(){
            account_number = 0;
            balance = 0.0;
        }

        BankAccount(unsigned long int acc_no , double blns){
            account_number = acc_no;
            balance = blns;
        }

       void display(){
        cout<<"Account Number : "<<account_number<<endl;
        cout<<"Balance        : "<<balance<<endl;
        }

        BankAccount UpdatedBalance(){
            BankAccount temp = *this ;
            temp.balance += temp.balance * 0.05;
            return temp;
        }

};
int main(){
    
    unsigned long int acc_no;
    double blns;

    cout<<"Enter Your Account Number : ";
    cin>>acc_no;
    cout<<"Enter your Balance : ";
    cin>>blns;

    BankAccount acc(acc_no,blns);

    cout<<"\n--Before Intrest--\n";
    acc.display();

    BankAccount acc1 = acc.UpdatedBalance();

    cout<<"\n--After 5% Intrest--\n";
    acc1.display();

    return 0;
}