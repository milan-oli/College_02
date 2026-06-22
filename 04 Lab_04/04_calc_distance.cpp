/*
Create a class Distance with data members kilometers and meters.
Write functions to add and subtract two Distance objects by passing 
objects as function arguments and return the result as an object.
*/

#include<iostream>
using namespace std;

class Distance{
    int kiloMeter , meter ;

    public : 
         Distance(){
            kiloMeter = 0;
            meter = 0;
        }

        void input(){
            cout << "Enter Kilometer : ";
            cin >> kiloMeter ;
            cout << "Enter Meter : ";
            cin >> meter ;
        }

        void display(){
            cout << kiloMeter << " km  " << meter << " m" << endl;
        }

       
        Distance add(Distance &D1 , Distance &D2){
            Distance temp;
            temp.kiloMeter = D1.kiloMeter + D2.kiloMeter ;
            temp.meter = D1.meter + D2.meter ;

            if(temp.meter >= 1000){
                temp.kiloMeter += temp.meter / 1000;
                temp.meter %= 1000 ;
            }

            return temp;
        }

        Distance subtract(Distance &D1 , Distance &D2){
            Distance temp;
            int total1, total2 ;

            total1 = D1.meter + D1.kiloMeter * 1000;
            total2 = D2.meter + D2.kiloMeter * 1000;

            if(total2 > total1){
                temp.meter = total2 - total1 ;
            }
            else{
                temp.meter = total1 - total2 ;
            }
        
            if(temp.meter >= 1000 ){
                temp.kiloMeter = temp.meter / 1000 ;
                temp.meter %= 1000 ;
            }

            return temp;
        }
};

int main(){
    Distance D1, D2, Sum , Sub ;

    cout << "\nEnter Distance 1 Values\n";
    D1.input();
    cout << "\nEnter Distance 2 Values\n";
    D2.input();

   
    Sum = Sum.add(D1,D2);
    
    Sub = Sub.subtract(D1,D2);
    cout << "\nAddition of two Distance\n";
    Sum.display();
    cout << "\nSubtraction of two Distance\n"; 
    Sub.display();

    return 0;
}
