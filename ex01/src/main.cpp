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
    const Animal *newAnimal[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
        {
            newAnimal[i] = new Cat();
            if (!newAnimal[i])
                exit(1);
        }
        else
        {
            newAnimal[i] = new Dog();
            if (!newAnimal[i])
                exit(1);
        }
    }
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
        {
            std::cout << "|\tThis is " << newAnimal[i]->getType() << "#" << i / 2 + 1 << "!\t\t\t\t\t\t|" << std::endl;
            newAnimal[i]->makeSound();
        }
        else
        {
            std::cout << "|\tThis is " << newAnimal[i]->getType() << "#" << i / 2 + 1 << "!\t\t\t\t\t\t|" << std::endl;
            newAnimal[i]->makeSound();
        }
    }
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    for (int i = 0; i < 10; i++)
    {
        delete newAnimal[i];
        if (i % 2)
        {
            std::cout << "|\033[31m" << "\tCat #" << i / 2 + 1 << " destroyed!\t\t\t\t\t" << "\033[0m|" << std::endl;
        }
        else
        {
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
    delete basic;
    printTopBorder();
    std::cout << "\n" << std::endl;

    printTopBorder();
    Dog* dog1 = new Dog();
    Dog* dog2 = new Dog();
    *dog2 = *dog1;
    dog2->makeSound();
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
