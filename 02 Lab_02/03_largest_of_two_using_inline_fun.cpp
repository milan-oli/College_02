//WAP to find largest of two numbers using inline function.

#include<iostream>
using namespace std;
inline int largest(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    int x, y;
    cout<<"Enter two integers : ";
    cin>>x>>y;
    cout<<"Largest : "<< largest(x, y) <<endl;
    return 0;
}