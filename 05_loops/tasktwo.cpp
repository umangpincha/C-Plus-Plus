#include<iostream>
using namespace std;
int main(){
    string isTea;
    do
    {
        cout << "Do you want tea ? (yes/no) : ";
        cin >> isTea;
    } while (isTea == "yes");
    return 0;
} 