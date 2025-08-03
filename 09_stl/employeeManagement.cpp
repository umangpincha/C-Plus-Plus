#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<numeric>
using namespace std;


struct Employee{
    string name;
    int id;
    double salary;
};


void displayEmployee(const Employee& emp) {
    cout << "Name: " << emp.name << ", ID: " << emp.id << ", Salary: " << emp.salary << endl;
}

int main(){
    vector<Employee> employees = {
        {"Alice", 101, 20000},
        {"Bob", 102, 60000},
        {"Charlie", 103, 55000},
        {"David", 104, 70000}
    };

    sort(employees.begin(), employees.end(), [](const Employee& e1 , const Employee& e2){
        return e1.salary > e2.salary;
    });

    // cout << "Employees sorted by salary in descending order:" << endl;
    // for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highEarners;

    copy_if(employees.begin(), 
    employees.end(), 
    back_inserter(highEarners), 
    [](const Employee& emp) {
        return emp.salary > 50000;
    });

    cout << "Employees salary greater than 50K:" << endl;
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);
    

    double totleSum = accumulate(employees.begin() , employees.end() , 0.0 , [](double sum  , const Employee& emp){
        return sum + emp.salary;
    });

    cout << "Total salary of all employees: " << totleSum << endl;

    cout << "Average salary of all employees: " << totleSum / employees.size() << endl;

    auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2) {
        return e1.salary < e2.salary;
    });

    cout << highestPaid->name << " is the highest paid employee with a salary of " << highestPaid->salary << endl;


    return 0;
}