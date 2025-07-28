#include<iostream>
using namespace std;
int main(){
    int cups;
    double price = 2.50 , totalPrice , discount; // Price per cup
    cout << "Enter number of cups : ";
    cin >> cups;
    totalPrice = cups * price; // Calculate total price
    if(cups > 20){
        cout << "You get a 20% discount!" << endl;
        discount = 0.20;
    }else if(cups >= 10 && cups <= 20){
        cout << "You get a 10% discount!" << endl;
        discount = 0.10;
    }else{
        cout << "You get no discount!" << endl;
        discount = 0.0;
    }
    totalPrice -= (totalPrice*discount); // Apply discount
    cout << "Total price is: $" << totalPrice << endl; // Display total price
    return 0;
}