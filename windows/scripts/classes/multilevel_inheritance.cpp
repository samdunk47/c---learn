#include <iostream>

class MyClass
{
public:
    void myFunction()
    {
        std::cout << "Some content in parent class." << std::endl;
    }
};

class MyChild : public MyClass
{
};

class MyGrandChild : public MyChild
{
};

int main()
{
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}