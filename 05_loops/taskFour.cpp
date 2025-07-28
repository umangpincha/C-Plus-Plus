#include<iostream>
using namespace std;

int main(){
    string response;
    while(true){
        cout << "Do you want tea ? (yes/stop) : ";
        getline(cin, response);
        if(response == "stop") {
            break;
        }
    }
    return 0;
}