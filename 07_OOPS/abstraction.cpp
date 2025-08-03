#include<iostream>
using namespace std;

class Tea{
    public:
        virtual void prepareTea() = 0; // Pure virtual function
        virtual void brewTea() = 0; //Pure virtual function
        virtual void serveTea() = 0; //Pure virtual function

        void makeTea(){
            prepareTea();
            brewTea();
            serveTea();
        }
};


class Greentea : public Tea{
    public:
        void prepareTea() override {
            cout << "Preparing green tea leaves." << endl;
        }

        void brewTea() override {
            cout << "Brewing green tea." << endl;
        }

        void serveTea() override {
            cout << "Serving green tea." << endl;
        }
};





int main(){
    Greentea gt;
    gt.makeTea();
    return 0;
}