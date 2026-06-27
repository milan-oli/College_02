/*
Create a C++ program that simulates a banking system. Define a class called BankAccount with private member
variables accountNumber, balance, and a static member variable totalAccounts to keep track of the total
number of bank accounts created. Implement the following functionalities:

-> A constructor that initializes the accountNumber and balance variables and increments the totalAccounts count.
-> A member function deposit() that takes an amount as input and adds it to the balance of the account.
-> A member function withdraw() that takes an amount as input and subtracts it from the balance,
    only if the balance is sufficient.
-> A static member function getTotalAccounts() that returns the total number of bank accounts created.

*/
#include <iostream>
using namespace std;
class BankAccount
{
    long unsigned int accountNumber;
    double balance;
    static int totalAccount;

public:
    BankAccount()
    {
        accountNumber = 0;
        balance = 0.0;
        totalAccount++;
    }
    BankAccount(long unsigned int accountNum, double bals)
    {
        accountNumber = accountNum;
        balance = bals;
        totalAccount++;
    }
    void deposit(double bals)
    {
        if (bals <= 0)
        {
            cout << "Enter Invalid amount !!" << endl;
        }
        else
        {
            balance += bals;
            cout << "Deposit rs " << bals << " successfully." << endl;
            cout << "Total Balance = " << balance << endl;
        }
    }
    void withdraw(double bals)
    {
        if (bals <= 0)
        {
            cout << "Entered Invalid amount !!" << endl;
        }
        else
        {
            if (balance >= bals)
            {
                balance -= bals;
                cout << "Withdrawn rs " << bals << " successfully. " << endl;
                cout << "Total Balance = " << balance << endl;
            }
            else
            {
                cout << "Not sufficient Balance !!" << endl;
            }
        }
    }
    static int getTotalAccounts();
};
int BankAccount ::totalAccount = 0;

int BankAccount ::getTotalAccounts()
{
    return totalAccount;
}
int main()
{
    long unsigned int accountNum;
    double bals;
    double deposit_amount, withdraw_amount;
    cout << "Enter account Number : ";
    cin >> accountNum;
    cout << "Enter your Balance : ";
    cin >> bals;
    BankAccount b1(accountNum, bals);

    cout << "Enter Amount to be deposit : ";
    cin >> deposit_amount;
    b1.deposit(deposit_amount);

    cout << "Enter Amount to be withdraw : ";
    cin >> withdraw_amount;
    b1.withdraw(withdraw_amount);

    cout << "Total Account created : " << BankAccount::getTotalAccounts();

    return 0;
}