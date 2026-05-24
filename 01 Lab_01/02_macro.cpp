/*
Implement a macro in C++ called "SQUARE" that takes an argument and 
returns the square of that number. Use macro expansion techniques to 
compute the square value without using any built-in mathematical functions. 
*/
#include <iostream>
#define SQUARE(x) ((x) * (x)) 
using namespace std;
int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "The square of " << num << " is: " << SQUARE(num) << endl;

    return 0;
}