#include "Dog.hpp"
#include <iostream>

/*default constructor*/
Dog::Dog() {
    _type = "Dog";
    std::cout << "|\033[33m" << "\tConstructing dog...\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tDog constructed!\t\t\t" << "\033[0m|" << std::endl;

}

/*destructor*/
Dog::~Dog() {
    std::cout << "|\033[33m" << "\tDestroying dog...\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[31m" << "\tDog destroyed!\t\t\t\t" << "\033[0m|" << std::endl;
}

/*public method functions*/
void Dog::makeSound() const {
    std::cout << "|\tWoof!\t\t\t\t\t|" << std::endl;
}
