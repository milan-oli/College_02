//WAP to implement dynamic memory allocation with new and delete operators (for both simple variable and array variable).

#include <iostream>
using namespace std;

int main()
{
    
    int *ptr = new int;

    *ptr = 100;

    cout << "Value of dynamically allocated variable : "<< *ptr << endl;
    
    delete ptr;

    int n;

    cout << "\nEnter the size of array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}