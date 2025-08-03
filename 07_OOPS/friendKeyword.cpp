#include<iostream>
#include<vector>
#include <string>
using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
    public:
        Chai(string name , int servingsCount) {
            teaName = name;
            servings = servingsCount;
        }
        void display(){
            cout << "Tea Name: " << teaName << ", Servings: " << servings << endl;
        }
        friend bool compareServings(const Chai &ch1 , const Chai &ch2);
};

bool compareServings(const Chai &ch1 , const Chai &ch2){
    return ch1.servings > ch2.servings;
}


int main(){
    Chai chai1("Masala Chai", 2);
    Chai chai2("Ginger Chai", 3);



    if(compareServings(chai1, chai2)){
        cout << "Chai 1 has more servings than Chai 2." << endl;
    }else{
        cout << "Chai 2 has more servings than Chai 1." << endl;
    }
    return 0;
}