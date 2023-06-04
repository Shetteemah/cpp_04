#include "WrongAnimal.hpp"
#include <iostream>

/*default constructor*/
WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "|\033[33m" << "\tConstructing WrongAnimal...\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tWrongAnimal constructed!\t\t" << "\033[0m|" << std::endl;
}

/*destructor*/
WrongAnimal::~WrongAnimal() {
    std::cout << "|\033[33m" << "\tDestroying WrongAnimal...\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[31m" << "\tWrongAnimal destroyed!\t\t\t" << "\033[0m|" << std::endl;
}

/*public method functions*/
void WrongAnimal::makeSound() const {
    std::cout << "|\tWrongAnimal sound!\t\t\t|" << std::endl;
}
