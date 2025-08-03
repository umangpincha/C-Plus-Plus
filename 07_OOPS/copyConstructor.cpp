#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        //data members (attributes)
        string* teaName;
        int servings;
        vector<string> ingredients; //list of ingredients of chai

        //default constructor
        Chai(string name, int servings, vector<string> ingre){
            teaName = new string(name);
            servings = servings;
            ingredients = ingre;
            cout << "Constructor called" << endl;
        }


        //member functions (methods)
            void displayChai(){
                cout << "Chai Name: " << *teaName << endl;
                cout << "Servings: " << servings << endl;
                cout << "Ingredients: ";
                for(string ingre: ingredients){
                    cout << ingre << " " << endl;
                }
            }

        //copy constructor
        Chai(const Chai& others){
            teaName = new string(*others.teaName);
            servings = others.servings;
            ingredients = others.ingredients; 
            cout << "Copy constructor called" << endl;
        }
        //destructor
        ~Chai(){
            delete teaName; //freeing dynamically allocated memory
            cout << "Destructor called" << endl;
        }
};

int main(){
    Chai myChai("Lemon tea",2,{"Water" , "Lemon" , "Honey"}); //creating an object of Chai class
    myChai.displayChai(); 

    //copy constructor
    Chai myChaiCopy = myChai; 
    myChaiCopy.displayChai();
    return 0;
}