#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "|\033[33m" << "\tConstructing default WrongAnimal...\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tDefault WrongAnimal constructed!\t\t\t" << "\033[0m|" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "|\033[33m" << "\tDestroying WrongAnimal...\t\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[31m" << "\tWrongAnimal destroyed!\t\t\t\t\t" << "\033[0m|" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "|\033[33m" << "\tConstructing copy WrongAnimal...\t\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tCopy WrongAnimal constructed!\t\t\t\t" << "\033[0m|" << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "|\033[33m" << "\tAssigning WrongAnimal operator...\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tWrongAnimal operator assigned!\t\t\t\t" << "\033[0m|" << std::endl;
    if (this == &src)
        return (*this);
    _type = src._type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return _type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "|\tThis animal makes a sound!\t\t\t|" << std::endl;
}
