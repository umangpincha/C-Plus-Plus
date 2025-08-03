#include<iostream>
#include<string>
using namespace std;

// TODO: INHERITANCE

// original class
class Tea{
    protected:
        string teaName;
        int servings;
    public:
        Tea(string name , int serv) : teaName(name), servings(serv) {
            cout << "Tea constructor called for " << teaName << endl;
        }

        virtual void brew() {
            cout << "Brewing " << teaName << " with generic method." << endl;
        }

        virtual void serve(){
            cout << "Serving " << servings  << " cups with generic method." << endl;
        }

        ~Tea() {
            cout << "Tea destructor called for " << teaName << endl;
        }
};


class greenTea : public Tea{
    public:
        greenTea(int serv) : Tea("Green Tea", serv) {
            cout << "GreenTea constructor called for " << teaName << endl;
        }
        void brew() override {
            cout << "Brewing " << teaName << " with green tea method." << endl;
        }
        void serve() override {
            cout << "Serving " << servings << " cups with green tea method." << endl;
        }

        ~greenTea() {
            cout << "GreenTea destructor called for " << teaName << endl;
        }
};


class masalaTea : public Tea{
    public:
        masalaTea(int serve): Tea("Masala tea" , serve){
            cout << "MasalaTea constructor called for " << teaName << endl;
        }
        void brew() override final{
            cout << "Brewing" << teaName << " with masala tea method." << endl;
        }  
        void serve() override {
            cout << "Serving " << servings << " cups with masala tea method." << endl;
        }

        ~masalaTea() {
            cout << "masala tea destructor called for " << teaName << endl;
        }
};

// class SpicyMasala : public masalaTea{
//     public:
//         void brew() override {
//             cout << "Brewing " << teaName << " with spicy masala method." << endl;
//         }
// };

int main(){
    // greenTea gt(2);
    // gt.brew();
    // gt.serve();

    Tea *tea1 = new greenTea(3);
    Tea *tea2 = new masalaTea(5);
    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;
    return 0;
}