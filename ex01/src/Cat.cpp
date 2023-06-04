#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
    _type = "Cat";
    _brain = new Brain();
}

Cat::~Cat()
{
    delete _brain;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    _brain = new Brain(*copy._brain);
}

Cat &Cat::operator=(const Cat &src)
{
    if (this == &src)
        return (*this);
    Animal::operator=(src);
    delete _brain;
    _brain = new Brain(*src._brain);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "|\tMeow meow!\t\t\t\t\t\t|" << std::endl;
}

void Cat::getIdea() const
{
    for (int i = 0; i < 10; i++)
    {
        if (i < 4)
            std::cout << "|\t[Cat's Idea #" << i + 1 << "] " << this->_brain->getIdea(i) << "\t|" << std::endl;
        else
            std::cout << "|\t[Cat's Idea #" << i + 1 << "] \t\t\t\t\t|" << std::endl;
    }
}

void Cat::setIdea(size_t index, std::string idea)
{
    _brain->setIdea(index, idea);
}

