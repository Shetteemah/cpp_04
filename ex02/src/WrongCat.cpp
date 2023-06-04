#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    _type = "WrongCat";
}

void WrongCat::makeSound() const
{
    std::cout << "|\tMeow meow!\t\t\t\t\t\t|" << std::endl;
}
