#include<iostream>
#include<string>
using namespace std;


int main(){
    string userTea;
    int teaQuantity;
    cout << "What would you like to order ?";
    getline(cin , userTea); // input from user

    //ask for quantity
    cout << "How many cups of " << userTea << " would you like to order ?"; 
    cin >> teaQuantity; // input from user 

    cout << teaQuantity;
    cout << userTea;

    return 0;
}