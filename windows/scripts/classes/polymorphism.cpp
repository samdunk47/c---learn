#include <iostream>

class Animal
{
public:
    void animalSound()
    {
        std::cout << "The animal makes a sound" << std::endl;
    }
};

class Pig : public Animal
{
public:
    void animalSound()
    {
        std::cout << "The pig says: wee wee" << std::endl;
    }
};

class Dog : public Animal
{
public:
    void animalSound()
    {
        std::cout << "The dog says: bow wow" << std::endl;
    }
};

int main()
{
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    
    return 0;
}