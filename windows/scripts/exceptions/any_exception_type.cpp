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
            throw 505;
        }
    }
    catch (...)
    {
        std::cerr << "Access denied - you must be at least 18 years old" << std::endl;
    }

    return 0;
}