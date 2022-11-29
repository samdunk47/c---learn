#include <iostream>
#include <string>
#include <cmath>

class Car
{
public:
    std::string brand;
    std::string model;
    int year;
    Car(std::string x, std::string y, int z);
};

Car::Car(std::string x, std::string y, int z)
{
    brand = x;
    model = y;
    year = z;
}

int main()
{
    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // Print values
    std::cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << std::endl;
    std::cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << std::endl;
    return 0;
}
