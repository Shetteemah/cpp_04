#include "../include/Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Animal")
{
    std::cout << "|\033[33m" << "\tConstructing default Animal...\t\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tDefault Animal constructed!\t\t\t\t" << "\033[0m|" << std::endl;
}

Animal::~Animal()
{
    std::cout << "|\033[33m" << "\tDestroying Animal...\t\t\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[31m" << "\tAnimal destroyed!\t\t\t\t\t" << "\033[0m|" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "|\033[33m" << "\tConstructing copy Animal...\t\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tCopy Animal constructed!\t\t\t\t" << "\033[0m|" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &src)
{
    std::cout << "|\033[33m" << "\tAssigning Animal operator...\t\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tAnimal operator assigned!\t\t\t\t" << "\033[0m|" << std::endl;
    if (this == &src)
        return (*this);
    _type = src._type;
    return (*this);
}

std::string Animal::getType() const
{
    return _type;
}

void Animal::makeSound() const
{
    std::cout << "|\tThis animal makes a sound!\t\t\t|" << std::endl;
}
