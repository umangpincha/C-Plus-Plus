#include<iostream>
using namespace std;

int* prepareChaiOrders(int cups){
    //dynamically allocate an array of integers
    int* orders = new int[cups];
    for(int i=0;i<cups;i++){
        orders[i] = (i+1)*10;
    } 
    return orders;
}


int main(){
    int cups = 7;
    int* chaiOrder = prepareChaiOrders(cups);
    cout << "Chai Orders: ";
    for(int i = 0; i < cups; i++){
        cout << chaiOrder[i] << " ";
    }

    delete[] chaiOrder; // Free the dynamically allocated memory
    return  0;
}