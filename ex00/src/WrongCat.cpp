#include "WrongCat.hpp"
#include <iostream>

/*default constructor*/
WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "|\033[33m" << "\tConstructing WrongCat...\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tWrongCat constructed!\t\t\t" << "\033[0m|" << std::endl;
}

/*destructor*/
WrongCat::~WrongCat() {
    std::cout << "|\033[33m" << "\tDestroying WrongCat...\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[31m" << "\tWrongCat destroyed!\t\t\t" << "\033[0m|" << std::endl;
}

/*public method functions*/
void WrongCat::makeSound() const {
    std::cout << "|\tWrongCat sound!\t\t|" << std::endl;
}
