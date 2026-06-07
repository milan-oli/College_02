//WAP to implement return by reference.
#include<iostream>
using namespace std;
int& largest(int &a , int &b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a = 30 , b = 25;
    cout << "value of a = " << a << "and b = " << b << endl;
    largest(a,b) = 50 ;
    cout << "value of a = " << a << "and b = " << b << endl;
    return 0;

}