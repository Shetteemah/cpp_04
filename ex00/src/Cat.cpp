#include "Cat.hpp"
#include <iostream>

/*default constructor*/
Cat::Cat() {
    _type = "Cat";
    std::cout << "|\033[33m" << "\tConstructing cat...\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tCat constructed!\t\t\t" << "\033[0m|" << std::endl;

}

/*destructor*/
Cat::~Cat() {
    std::cout << "|\033[33m" << "\tDestroying cat...\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[31m" << "\tCat destroyed!\t\t\t\t" << "\033[0m|" << std::endl;
}

/*public method functions*/
void Cat::makeSound() const {
    std::cout << "|\tMeow!\t\t\t\t\t|" << std::endl;
}
