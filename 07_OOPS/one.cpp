#include<iostream>
using namespace std;

class Chai{
    public:
        //data members (attributes)
        string teaName;
        int servings;
        vector<string> ingredients; //list of ingredients of chai

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
    //creating objects of class Chai
    Chai chaiOne;
    chaiOne.teaName = "Masala Chai";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Tea leaves", "Milk", "Sugar", "Spices"};
    chaiOne.displayChai();

    
    Chai chaiTwo;
    chaiOne.teaName = "Lemon Chai";
    chaiOne.servings = 4;
    chaiOne.ingredients = {"Tea leaves", "Lemon", "Honey"};
    chaiOne.displayChai();

    return 0;
}