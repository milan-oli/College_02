/*
 Implement a C++ program that demonstrates the usage of namespaces. Create 
three namespaces called "English","Nepali" and “Newa”. All namespaces 
should define a function called "greet" that takes no parameters and returns a 
greeting message in the respective language. In the main function, invoke the 
"greet" function from each namespace and display the greetings. 
*/
#include<iostream>
using namespace std;

namespace English {
	void greet(){
		cout << "Hello!" << endl;
	}
}
namespace Nepali {
	void greet(){
		cout << "Namaste!" << endl ;
	}
}
namespace Newa {
	void greet(){
		cout << "Jwojalapa!" << endl;
	}
}

int main(){
	
	English::greet();
	Nepali::greet() ;
	Newa::greet() ;

	return 0;
}