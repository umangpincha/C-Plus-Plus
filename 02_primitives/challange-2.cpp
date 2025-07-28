#include<iostream>
using namespace std;

int main(){
    int teaBasePrice;
    cout << "Enter the base price of tea: ";
    cin >> teaBasePrice;

    int teaPrice = (int)(teaBasePrice*110/100); // Adding 5 to the base price

    

    cout << "The price of tea is: " << teaPrice << endl;
    return 0;
}







