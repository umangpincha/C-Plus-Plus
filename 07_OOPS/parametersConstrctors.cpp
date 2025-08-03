#include<iostream>
using namespace std;

class Chai{
    public:
        //data members (attributes)
        string teaName;
        int servings;
        vector<string> ingredients; //list of ingredients of chai

        //parameter constructor
        Chai(string name , int serve , vector<string> ingre){
            teaName = name;
            servings = serve;
            ingredients = ingre;
            cout << "Parameter Constructor called" << endl;
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
    Chai defaultChai("Lemon Chai", 2, {"Tea Leaves", "Lemon", "Sugar", "Water"});
    defaultChai.displayChai();
    return 0;
}