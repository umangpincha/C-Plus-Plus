#include<iostream>
using namespace std;

int main(){
    int chaiTemperature[7] = {30, 32, 31, 29, 28, 33, 34};

    cout << "Chai Temperature";
    for(int i = 0; i < 7; i++){
        cout << " " << chaiTemperature[i] << "degree C \n";
    }
}