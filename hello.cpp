#include <iostream>
#include <string>
#include <cmath>

class MyClass
{
public:
    int myNum;
    void myMethod();
};

void MyClass::myMethod()
{
    std::cout << myNum << std::endl;
}

int main()
{
    MyClass myObj;

    myObj.myNum = 15;

    myObj.myMethod();

    return 0;
}

