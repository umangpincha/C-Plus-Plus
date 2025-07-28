#include<iostream>
using namespace std;
int main(){
    // TODO: CHALLANGE 1
    int numberOfCups;
    double priceCup , totalPrice;
    cout << "Enter number of cups: ";
    cin >> numberOfCups;
    cout << "Enter price of each cup: ";
    cin >> priceCup;
    totalPrice = numberOfCups * priceCup;
    if(totalPrice > 100){
        //apply 5% discount
        totalPrice = numberOfCups * priceCup * 0.95;
        cout << "Total price after 5% discount is: " << totalPrice << endl;
    }else{
        //no discount
        cout << "Total price is: " << totalPrice << endl;
    }
}