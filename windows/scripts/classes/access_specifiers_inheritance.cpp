#include <iostream>

class Employee
{
protected:
    int salary;
};

class Programmer : public Employee
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    std::cout << "Salary: " << myObj.getSalary() << std::endl;
    std::cout << "Bonus: " << myObj.bonus << std::endl;
    return 0;
}