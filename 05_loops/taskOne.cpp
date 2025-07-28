#include<iostream>
using namespace std;
int main(){
    int cups;
    cout << "Enter the number of tea cups : ";
    cin >> cups;

    while (cups > 0) {
        cout << "You have " << cups << " cups of tea." << endl;
        cups--; // Decrease the number of cups
    }
    return 0;
}