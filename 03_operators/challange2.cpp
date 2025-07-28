#include<iostream>
using namespace std;
int main(){
    // TODO: CHALLANGE 2
    int numberOfTeaBags;
    cout << "Enter the number of tea bags: ";
    cin >> numberOfTeaBags;
    if(numberOfTeaBags < 10){
        numberOfTeaBags+=5;
    }
    cout << numberOfTeaBags;
}