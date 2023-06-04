#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

/*my class*/
class Animal {
/*protected variable*/
protected:
    std::string _type;
/*publice variable*/
public:
    /*default constructor*/
    Animal();
    /*destructor*/
    virtual ~Animal();
    /*public method functions*/
    virtual void makeSound() const;
    std::string getType() const;
};

#endif
