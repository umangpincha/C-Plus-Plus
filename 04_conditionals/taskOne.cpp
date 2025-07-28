#include<iostream>
using namespace std;
int main(){
    string tea;
    cout << "Enter tea :";
    getline(cin, tea);
    if(tea == "Green Tea"){
        cout << "Your" << tea << " is ready";
    }
    return 0;
}