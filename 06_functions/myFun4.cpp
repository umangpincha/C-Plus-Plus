#include<iostream>
using namespace std;

// TODO: Lambda function to print the number of cups of chai ordered
int main(){
    auto myFun = [](int cups) {
     cout << "You have ordered " << cups << " cups of chai." << endl;
    };

    myFun(4);
    return 0;
}