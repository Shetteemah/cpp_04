#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"
#include <iostream>

void printTopBorder()
{
    std::string topBorder(63, '-');
    std::cout << '+' << topBorder << '+' << std::endl;
}

int main()
{
    printTopBorder();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    delete j; // should not create a memory leak
    delete i;
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    Animal* animals[10];
    for (int i = 0; i < 5; i++)
    {
        animals[i] = new Dog();
        std::cout << "|\tThis is " << animals[i]->getType() << "#" << i + 1 << "!\t\t\t\t\t\t|" << std::endl;
        animals[i]->makeSound();
    }
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    for (int i = 5; i < 10; i++)
    {
        animals[i] = new Cat();
        std::cout << "|\tThis is " << animals[i]->getType() << "#" << i + 1 << "!\t\t\t\t\t\t|" << std::endl;
        animals[i]->makeSound();
    }
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
	for (int i = 0; i < 1; i++)
	{
        animals[i] = new Cat();
        Cat* cat = dynamic_cast<Cat*>(animals[i]);
		cat->getIdea();
	}
	for (int i = 0; i < 1; i++)
	{
        animals[i] = new Dog();
        Dog* dog = dynamic_cast<Dog*>(animals[i]);
		dog->getIdea();
	}
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
        {
            delete animals[i];
            std::cout << "|\033[31m" << "\tCat #" << i / 2 + 1 << " destroyed!\t\t\t\t\t" << "\033[0m|" << std::endl;
        }
        else
        {
            delete animals[i];
            std::cout << "|\033[31m" << "\tDog #" << i / 2 + 1 << " destroyed!\t\t\t\t\t" << "\033[0m|" << std::endl;
        }
    }
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    Dog* basic = new Dog();
    {
        Dog tmp = *basic;
        tmp.makeSound();
    }
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    Dog* dog1 = new Dog();
    Dog* dog2 = new Dog();
    *dog2 = *dog1;
    dog2->makeSound();
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    delete dog1;
    delete dog2;
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    WrongAnimal* wrongAnimal = new WrongCat();
    wrongAnimal->makeSound();
    delete wrongAnimal;
    printTopBorder();

    return 0;
}
