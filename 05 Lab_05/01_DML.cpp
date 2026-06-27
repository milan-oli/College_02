/* 
Write a C++ program that demonstrates the dynamic memory allocation for objects and object arrays. 
Create a class called Rectangle with private member variables length and width and member functions 
to set and display the dimensions of a rectangle. Implement the following functionalities:

-> Dynamically create a single Rectangle object by allocating memory using new and set the dimensions of 
    the rectangle object.
-> Display the dimensions of the rectangle object.
-> Dynamically create an array of Rectangle objects by allocating memory using new and 
    set the dimensions of each rectangle in the array.
-> Display the dimensions of each rectangle in the array. 
*/ 
#include<iostream>

using namespace std;
class Rectangle{
    float length , width ;

    public :
        Rectangle(){
            length = 0;
            width = 0;

        }

        void set(float l, float w){
            length = l;
            width = w;
        }
        void display(){
            cout << "Length : " << length << " , Width : " << width << endl;
        }
};

int main(){
    float l = 0, w = 0;
    Rectangle *rect = new Rectangle;

    cout << "Input Dimension for Single Rectangle : " << endl ;

    cout<<"Enter Length : " ;
    cin >> l;
    cout << "Enter Width : ";
    cin >> w;

    rect -> set(l,w);

    cout << "Displaying Dimension of Single Rectangle : " << endl;
    rect -> display();

    delete rect;

    int n;

    cout << "Enter number of objects : " ;
    cin >> n ;

    Rectangle *R = new Rectangle[n];

    for(int i = 0 ; i < n ; i++){
        cout << "Enter Dimension for Rectangle " << i + 1 << ": " << endl;
        cout<<"Enter Length : " ;
        cin >> l;
        cout << "Enter Width : ";
        cin >> w;

        R[i].set(l,w);
    }
    for(int i = 0 ; i < n ; i++){
        cout << "Displaying Dimension for Rectangle " << i + 1 << ": " << endl;
        R[i].display();
    }
    delete[] R;

    return 0;


}