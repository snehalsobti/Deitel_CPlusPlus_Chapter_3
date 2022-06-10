#include <string>
#include "Employee.h"
using namespace std;

Employee :: Employee(string fName, string lName, int mSalary)
    : firstName(fName), lastName(lName)
{
    setMonthlySalary(mSalary);
}

string Employee :: getFirstName() const
{
    return firstName;
}

string Employee :: getLastName() const
{
    return lastName;
}

int Employee :: getMonthlySalary() const
{
    return monthlySalary;
}

void Employee :: setFirstName(string fName)
{
    firstName = fName;
}

void Employee :: setLastName(string lName)
{
    lastName = lName;
}

void Employee :: setMonthlySalary(int mSalary)
{
    if (mSalary > 0)
        monthlySalary = mSalary;
    else
        monthlySalary = 0;
}