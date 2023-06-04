#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

/* my base class */
class Animal
{
/*protected variable*/
protected:
    std::string _type;
    /*default constructor*/
    Animal();

/*public variable*/
public:
    /*copy constructor*/
    Animal(const Animal &copy);
    /*destructor*/
    virtual ~Animal();
    /*overload operator*/
    Animal &operator=(const Animal &src);
    /*public method functions (getter)*/
    std::string getType() const;
    /* pure virtual function */
    virtual void makeSound() const = 0;
};
#endif
