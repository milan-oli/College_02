/*
Define a structure called BankAccount to represent a bank account with attributes such as account number, 
account holder name, and account balance. Include methods to deposit and withdraw money from the account. 
In the main function, create an instance of the BankAccount structure, prompt the user for account details 
and initial balance, perform a deposit, perform a withdrawal, and print the updated account balance.
*/
#include<iostream>
#include<string>

using namespace std;
struct BankAccount{
    double accountNumber;
    string accountHolderName;
    double accountBalance = 0.0;

    void deposit(){
        double depositAmount;
        cout<<"Enter deposite amount : ";
        cin >> depositAmount;
        accountBalance = accountBalance + depositAmount;
        cout<<"Balance after depositing : "<< accountBalance <<endl;

    }
    void withdraw(){
        double withdrawAmount;
        cout<<"Enter withdraw amount : ";
        cin >> withdrawAmount;

        if(accountBalance >= withdrawAmount){
            accountBalance = accountBalance - withdrawAmount;
            cout<<"Balance after Withdrawing : "<< accountBalance <<endl;
        }
        else{
            cout<<"Not sufficent Balance."<<endl;
        }
        

    }
};
int main(){
    BankAccount acc1;
    cout<<"Enter Account Number : " ;
    cin >> acc1.accountNumber;
    cout << "Enter Account Holder Name : ";
    cin >> acc1.accountHolderName;
    cout<<"Enter initial Balance : ";cin>>acc1.accountBalance;
    acc1.deposit();
    acc1.withdraw();

    cout << "Updated Balance : " << acc1.accountBalance;
    return 0;
}