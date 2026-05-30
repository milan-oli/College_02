//WAP to find the volume of a cube, cuboid and cylinder using the concept of function overloading.

#include<iostream>
using namespace std;

void volm(float l){
    cout<<"Volume of cube is : "<< l * l * l <<endl;
}

void volm(float l, float b, float h){
    cout<<"Volume of cuboid is : "<< l * b * h <<endl;
}
void volm(float r, float h){
    cout<<"Volume of cylinder is : "<< 3.14 * r * r * h <<endl;
}

int main(){
    float l, b, h, r;

    cout<<"Enter the length of cube : ";
    cin>>l;
    volm(l);

    cout<<"Enter the length, breadth and height of cuboid  : ";
    cin>>l>>b>>h;
    volm(l, b, h);

    cout<<"Enter the radius and height of cylinder : ";
    cin>>r>>h;
    volm(r, h);

    return 0;
}