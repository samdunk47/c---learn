#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Car {        // The class
  public:          // Access specifier
    std::string brand;  // Attribute
    std::string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  std::cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << std::endl;
  std::cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << std::endl;
  return 0;
}
