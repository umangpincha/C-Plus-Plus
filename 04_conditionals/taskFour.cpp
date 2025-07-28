#include<iostream>
using namespace std;
int main(){
    int choice;
    cout << "Welcome to the Tea Selection Program!" << endl;
    cout << "Please select your type of tea:" << endl;
    cout << "1. Green Tea" << endl; 
    cout << "2. Black Tea" << endl;
    cout << "3. Oolong Tea" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "You have selected Green Tea" << endl;
        break;
    case 2:
        cout << "You have selected Black Tea" << endl;
        break;
    case 3:
        cout << "You have selected Oolong Tea" << endl;
        break;
    default:
        cout << "Invalid choice, please select 1, 2, or 3." << endl;
        break;
    }
    return 0;
}