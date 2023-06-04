#include "Animal.hpp"
#include <iostream>

/*default constructor*/
Animal::Animal(): _type("Animal")
{
    std::cout << "|\033[33m" << "\tConstructing animal...\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tAnimal constructed!\t\t\t" << "\033[0m|" << std::endl;
}

/*destructor*/
Animal::~Animal()
{
    std::cout << "|\033[33m" << "\tDestroying animal...\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[31m" << "\tAnimal destroyed!\t\t\t" << "\033[0m|" << std::endl;
}

/*public method functions*/
void Animal::makeSound() const
{
    std::cout << "|\tAnimal sound!\t\t\t\t|" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}
