#include<iostream>
using namespace std;
// TODO: PASS BY VALUE 

void pourChai(int cups){
    cups+=7;
    cout << "Pouring " << cups << " cups of chai." << endl;
}

int main(){
    int cups = 5;
    pourChai(cups); // Passing by value
    cout << cups << " cups of chai were poured." << endl;
    return 0;
}