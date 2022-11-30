#include <iostream>
#include <string>

class Vehicle
{
public:
    std::string brand = "Ford";
    void honk()
    {
        std::cout << "Tuut, tuut!" << std::endl;
    }
};

// Derived class
class Car : public Vehicle
{
public:
    std::string model = "Mustang";
};

int main()
{
    Car myCar;
    myCar.honk();
    std::cout << myCar.brand + " " + myCar.model << std::endl;
    return 0;
}