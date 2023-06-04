#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

/*my class*/
class Dog : public Animal
{
    /*private variable*/
private:
    Brain *_brain;

    /*public variable*/
public:
    /*default constructor*/
    Dog();
    /*copy constructor*/
    Dog(const Dog &copy);
    /*destructor*/
    ~Dog();
    /*overload operator*/
    Dog &operator=(const Dog &src);
    /*public method functions*/
    void makeSound() const;
    /*public method functions (getter)*/
    void getIdea() const;
    /*public method functions (setter)*/
    void setIdea(size_t index, std::string idea);
};

#endif
