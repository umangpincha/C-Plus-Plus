#include<iostream>
using namespace std;

//ENCAPSULATION: Everything is encapsulated

class Banking{
    private:
        string accountNumber;
        int balance;
    public:
        Banking(string number , int bal){
            accountNumber = number;
            balance = bal;
        }

        //getter
        double getBalance() const {
            return balance;
        }

        //Method to deposit money
        void deposit(int amount){
            if(amount > 0){
                balance += amount;
                cout << "Deposited amount: " << amount << endl;
            } else {
                cout << "Deposit amount must be positive." << endl;
            }
        }
        //Method to withdraw money
        void withdraw(int amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout << "amount withdrawn: " << amount << endl;
            } else {
                cout << "Withdrawn amount must be positive." << endl;
            }
        }
};

int main(){
    Banking account1("123456789", 1000);
    cout << account1.getBalance() << endl;
    return 0;
}