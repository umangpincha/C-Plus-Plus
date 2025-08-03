#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        //delegating constructor
        Chai(string name){
           Chai(name, 1, {"Tea Leaves", "Water", "Milk", "Sugar"});
        }

        Chai(string name , int serv , vector<string> ing){
            teaName = name;
            servings = serv;
            ingredients = ing;
        }

        void displayChaiDetails(){
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: " ;
        for(string ingridient : ingredients){
            cout << ingridient << " ";
        }
        cout << endl;
        }

};


int main(){
    Chai chai1("Delegating Chai");
    chai1.displayChaiDetails();
    return 0;
}