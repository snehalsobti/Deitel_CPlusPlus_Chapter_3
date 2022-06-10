#include <string>

class Employee
{
public:
    explicit Employee(std :: string fName, std :: string lName, int mSalary);
    std :: string getFirstName() const;
    std :: string getLastName() const;
    int getMonthlySalary() const;
    void setFirstName(std :: string fName);
    void setLastName(std :: string lName);
    void setMonthlySalary(int mSalary);

private:
    std :: string firstName;
    std :: string lastName;
    int monthlySalary;
};