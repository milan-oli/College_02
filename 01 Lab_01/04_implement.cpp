/*WAP to  implement endl,setw, setprecision,fixed and scientific Manipulator.*/
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	 cout << "Hello!" << endl;
	 cout << setw(10) << 42 << endl;
	 
	 cout << fixed << 3.123456789 << endl;
	 cout << scientific << 3.123456789 <<endl;
	 cout << setprecision(3) << 3.123456789 << endl;
	return 0;
}  