#include<iostream>
using namespace std;
int main(){
    int hour;
    cout << "Enter the current hour (0-23)";
    cin >> hour;
    if(hour >= 8 && hour <=18){
        cout << "Shop is open";
    }else{
        cout << "Shop is closed";
    }
    return 0;
}