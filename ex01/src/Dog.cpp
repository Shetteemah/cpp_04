#include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
    _type = "Dog";
    _brain = new Brain();
}

Dog::~Dog()
{
    delete _brain;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    _brain = new Brain(*copy._brain);
}

Dog &Dog::operator=(const Dog &src)
{
    if (this == &src)
        return (*this);
    Animal::operator=(src);
    delete _brain;
    _brain = new Brain(*src._brain);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "|\tWoof woof!\t\t\t\t\t\t|" << std::endl;
}

void Dog::getIdea() const
{
    for (int i = 4; i < 14; i++)
    {
        if (i < 8)
            std::cout << "|\t[Dog's Idea #" << i - 3 << "] " << this->_brain->getIdea(i) << "\t|" << std::endl;
        else
            std::cout << "|\t[Dog's Idea #" << i - 3 << "] \t\t\t\t\t|" << std::endl;
    }
}

void Dog::setIdea(size_t index, std::string idea)
{
    _brain->setIdea(index, idea);
}
