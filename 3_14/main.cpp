#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

int main()
{
    Employee employee1("Jarvin", "Gill", 50);
    Employee employee2("Shawn", "Sebastian", 60);
    
    cout << "Employee: " << employee1.getFirstName() 
         << " " << employee1.getLastName() << endl;
    cout << "Yearly Salary: $" << employee1.getMonthlySalary() * 12 << endl;
    cout << endl;

    cout << "Employee: " << employee2.getFirstName() 
         << " " << employee2.getLastName() << endl;
    cout << "Yearly Salary: $" << employee2.getMonthlySalary() * 12 << endl;
    cout << endl;

    employee1.setMonthlySalary(employee1.getMonthlySalary() * (1 + 10.0 / 100));
    employee2.setMonthlySalary(employee2.getMonthlySalary() * (1 + 10.0 / 100));

    cout << "Employee: " << employee1.getFirstName() 
         << " " << employee1.getLastName() << endl;
    cout << "New Yearly Salary: $" << employee1.getMonthlySalary() * 12 << endl;
    cout << endl;

    cout << "Employee: " << employee2.getFirstName() 
         << " " << employee2.getLastName() << endl;
    cout << "New Yearly Salary: $" << employee2.getMonthlySalary() * 12 << endl;
    cout << endl;
    
    employee2 = employee1;

    cout << "Employee: " << employee1.getFirstName() 
         << " " << employee1.getLastName() << endl;
    cout << "New Yearly Salary: $" << employee1.getMonthlySalary() * 12 << endl;
    cout << endl;

    cout << "Employee: " << employee2.getFirstName() 
         << " " << employee2.getLastName() << endl;
    cout << "New Yearly Salary: $" << employee2.getMonthlySalary() * 12 << endl;
    cout << endl;
}