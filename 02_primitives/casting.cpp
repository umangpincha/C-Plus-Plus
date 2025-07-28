#include<iostream>
using namespace std;


int main(){
    float teaprice = 300.9999;
    short roundTeaprice = (float)teaprice; // explicit casting from float to int

    cout << roundTeaprice<< endl;
    return 0;
}