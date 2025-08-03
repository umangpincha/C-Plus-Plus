#include<iostream>
using namespace std;

class Chai{
    public:
        //data members (attributes)
        string teaName;
        int servings;
        vector<string> ingredients; //list of ingredients of chai

        //default constructor
        Chai(){
            teaName = "Unknown Chai";
            servings = 0;
            cout << "Constructor called" << endl;
        }

        //member functions (methods)
            void displayChai(){
                cout << "Chai Name: " << teaName << endl;
                cout << "Servings: " << servings << endl;
                cout << "Ingredients: ";
                for(string ingre: ingredients){
                    cout << ingre << " " << endl;
                }
            }

};

int main(){
    Chai defaultChai;
    defaultChai.displayChai();
    return 0;
}