#include<iostream>
using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;
    public:
        Chai(){
            teaName = "Default Chai";
            servings = 1;
        }
        Chai(string name , int serv , vector<string> ingre){
            teaName = name;
            servings = serv;
            ingredients = ingre;
        }
        //getter
        string getTeaName(){
            return teaName;
        }
        //setter
        string setTeaName(string name){
            teaName = name;
        }
        //getter
        int getServings(){
            return servings;
        }
        //setter
        int setServings(int serv){
            servings = serv;
        }
        
        //getter
        vector<string> getIngredients(){
            return ingredients;
        }
        //setter
        vector<string> setIngredients(vector<string> ingre){
            ingredients = ingre;
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
    Chai chai;
    chai.setTeaName("Masala Chai");
    return 0;
}