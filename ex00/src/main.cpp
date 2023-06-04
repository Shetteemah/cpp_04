#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

void printTopBorder(void) {
    std::string topBorder(47, '-');
    
    std::cout << '+' << topBorder << '+' << std::endl;
}

int main() {
    printTopBorder();
    const Animal* animalDefault = new Animal();
    std::cout << "|\tThis animal is called \"" << animalDefault->getType() << "\"!\t\t|" << std::endl;
    animalDefault->makeSound();
    delete (animalDefault);
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    const Animal* animalDog = new Dog();
    std::cout << "|\tThis animal is called \"" << animalDog->getType() << "\"!\t\t|" << std::endl;
    animalDog->makeSound();
    delete (animalDog);
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    const Animal* animalCat = new Cat();
    std::cout << "|\tThis animal is called \"" << animalCat->getType() << "\"!\t\t|" << std::endl;
    animalCat->makeSound(); // will output the cat sound!
    delete (animalCat);
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    const WrongAnimal* wrongAnimalDefault = new WrongAnimal();
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    const WrongAnimal* wrongAnimalDog = new WrongCat();
    wrongAnimalDog->makeSound(); // will output the wrong animal sound
    printTopBorder();
    std::cout << "\n" << std::endl;


    // std::cout << "|\tIt makes a " << i->makeSound() << " sound!\t\t|" << std::endl;

    printTopBorder();
    delete (wrongAnimalDefault);
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    delete (wrongAnimalDog);
    printTopBorder();
    std::cout << "\n" << std::endl;

    return 0;
}
