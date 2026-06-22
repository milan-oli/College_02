//WAP to show the destructor call such that it prints the message “memory is released”.
#include<iostream>
using namespace std;
class Add{
    int a = 80;
    int b = 77;
    public: 
    
    Add(){
        cout << a << " + " << b << " = "<< a + b << endl;
    }
    ~Add(){
        cout << "Memory is released !! " << endl;
    }
};
int main(){

    Add add1;

    return 0;
}