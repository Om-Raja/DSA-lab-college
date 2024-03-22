#include<iostream>
#include<string>
using namespace std;
class employee{
    public: 
    int SSN, Sal;
    long long int Phone;
    string Name, Dept, Designation;
    employee* prev;
    employee* next;
};

employee new_employee()
{
    employee* new_employee = new employee();
    cout << "Enter Name: ";
    cin >> new_employee -> Name;
    cout << "Enter SSN: ";
    cin >> new_employee -> SSN;
    cout << "Enter Phone: ";
    cin >> new_employee -> Phone;
    cout << "Enter Department: ";
    cin >> new_employee -> Dept;
    cout << "Enter Salary: ";
    cin >> new_employee -> Sal;
    cout << "Enter Designation: ";
    cin >> new_employee -> Designation;
    
}
int main()
{
    employee* new_employee = new employee();
    new_employee -> data = 4;
    cout << new_employee -> data;
}
