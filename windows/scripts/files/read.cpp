#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string myText;

    std::ifstream MyReadFile("text_file.txt");

    while (getline (MyReadFile, myText))
    {
        std::cout << myText << std::endl;
    }

    MyReadFile.close();
}