#include <iostream>

int main()
{
    try
    {
        int age;
        std::cout << "Enter age: ";
        std::cin >> age;
        if (age >= 18)
        {
            std::cout << "Access granted - you are old enough" << std::endl;
        }
        else
        {
            throw(age);
        }
    }
    catch (int myNum)
    {
        std::cout << "Access denied - you must be at least 18 years old" << std::endl;
        std::cout << "Age is: " << myNum << std::endl;
    }
}

