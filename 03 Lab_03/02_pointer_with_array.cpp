//WAP to implement pointer with array.
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    for(int i = 0 ; i < 5 ; i++){
        cout << "Array ["<<i+1<<"] = "<<*(ptr+i)<<endl;
    }

    return 0;
}