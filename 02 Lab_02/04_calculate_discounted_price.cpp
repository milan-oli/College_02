/*
Write a C++ function called calculateDiscountedPrice that calculates the discounted price of an item. 
The function should have two parameters: price (representing the original price) and discountPercentage 
(with a default value of 10%). The function should return the calculated discounted price.
In the main function, prompt the user to enter the original price of an item. Then, 
call the calculateDiscountedPrice function twice: once with the default discount percentage and
once with a specific discount percentage entered by the user. Finally, print the original price and the two discounted prices.
*/
#include<iostream>
using namespace std;
float calculateDiscountedPrice(float price, float discount = 10.0){
    return price - (price * discount / 100);
}
int main(){
    float price, discount;

    cout<<"Enter the price of the product : ";
    cin>>price;

    cout<<"Enter the discount percentage (default is 10%) : ";
    cin>>discount;

    cout << "Original price : " << price << endl;
    cout<<"Price after default discount  : "<< calculateDiscountedPrice(price) <<endl;
    cout<<"Price after custom discount : "<< calculateDiscountedPrice(price, discount) <<endl;
    
    return 0;
}