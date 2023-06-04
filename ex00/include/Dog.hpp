#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

/*my class*/
class Dog : public Animal {
/*publice variable*/
public:
    /*default constructor*/
    Dog();
    /*destructor*/
    ~Dog();
    /*public method functions*/
    void makeSound() const;
};

#endif
