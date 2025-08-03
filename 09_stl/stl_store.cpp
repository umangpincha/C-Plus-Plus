#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<map>
#include<deque>
#include<list>
#include<ctime>

using namespace std;
// Structures (also called structs) are a way to group several related variables into one place.


struct Product{
    int productID;
    string name;
    string category;
};

struct Order{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate; // Using time_t to store date and time
};


int main(){

    //store products
    vector<Product> products = {
        {1, "Laptop", "Electronics"},
        {2, "Smartphone", "Electronics"},
        {3, "Tablet", "Electronics"},
        {4, "Headphones", "Accessories"},
        {5, "Charger", "Accessories"},
        {6, "Charger", "Accessories"},
    };

    //store customers
    deque<string> recentCustomers = {"Alice", "Bob", "Charlie", "David", "Eve"};
    recentCustomers.push_front("Frank");
    recentCustomers.push_front("Ed ");

    //store orders
    list <Order> orders = {
        {1, 1, 2, "Alice", time(0)},
        {2, 2, 1, "Bob", time(0)},
        {3, 3, 5, "Charlie", time(0)},
        {4, 4, 1, "David", time(0)},
        {5, 5, 3, "Eve", time(0)}
    };

    //set to store unique categories
    set<string> categories;
    for(const auto &product: products){
        categories.insert(product.category);
    }


    for(const auto &category: categories){
        cout << "Category: " << category << endl;
    }


    unordered_set<string> uniqueCustomers;
    for(auto &productName:products){
        uniqueCustomers.insert(productName.name);
    }

    cout << "Customer Name ......"<<endl;
    for(const auto &customerName: uniqueCustomers){
        cout << "CusName: " << customerName << endl;
    }

    // Display products
    // cout << "Products:\n";
    // for(const auto &product: products){
    //     cout << "ID: " << product.productID << ", Name: " << product.name 
    //          << ", Category: " << product.category << endl;
    // }
    return 0;
}






