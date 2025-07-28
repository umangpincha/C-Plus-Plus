#include<iostream>
using namespace std;

int main(){
    int numberOfTeaPack;
    double price;
    cout << "Enter the number of tea packs: ";
    cin >> numberOfTeaPack;
    cout << "Enter the price of one tea pack: ";
    cin >> price;
    double totalPrice = numberOfTeaPack * price;
    // add 10% tax to the total price
    int taxPrice = (totalPrice * 0.1) + totalPrice;
     return 0;
}