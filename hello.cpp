#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class MyClass
{
public:
    int myNum;
    string myString;
    void myMethod();
};

void MyClass::myMethod()
{
    cout << myNum << " " << myString << endl;
}

int main()
{
    MyClass myObj;

    myObj.myNum = 15;
    myObj.myString = "Hello, world!";

    myObj.myMethod();

    return 0;
}

