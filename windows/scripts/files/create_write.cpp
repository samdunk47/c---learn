#include <iostream>
#include <fstream>

int main()
{
    std::ofstream MyFile("text_file.txt");

    MyFile << "This is a test onto the text file";

    MyFile.close();
}