//WAP to swap values of two integers, two characters, two floats and two strings respectively using function overloading.

#include<iostream>
#include<string>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}
void swap(float &a, float &b){
    float temp = a;
    a = b;
    b = temp;
}
void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    char c1, c2;
    float f1, f2;
    string s1, s2;

    cout<<"Enter two integers : ";
    cin>>a>>b;
    swap(a, b);
    cout<<"After swapping integers: "<<a<<" "<<b<<endl;

    cout<<"Enter two characters : ";
    cin>>c1>>c2;
    swap(c1, c2);
    cout<<"After swapping characters: "<<c1<<" "<<c2<<endl;

    cout<<"Enter two floats : ";
    cin>>f1>>f2;
    swap(f1, f2);
    cout<<"After swapping floats: "<<f1<<" "<<f2<<endl;

    cout<<"Enter two strings : ";
    cin>>s1>>s2;
    swap(s1, s2);
    cout<<"After swapping strings: "<<s1<<" "<<s2<<endl;

    return 0;
}