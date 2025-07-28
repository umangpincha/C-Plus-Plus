#include<iostream>
using namespace std;

int main(){
    string teaTypes[3] = {"Green Tea", "Black Tea", "Herbal Tea"};
    for(int i = 0; i < 3; i++){
        cout << "Brewing oolong tea ..." << endl;
        for(int j = 0; j < 3; j++){
           cout << "Brewing " << teaTypes[i] << " ..." << endl;
        }
    }
    return 0;
}