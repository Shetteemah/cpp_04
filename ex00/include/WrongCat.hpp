#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

/*my class*/
class WrongCat : public WrongAnimal {
/*publice variable*/
public:
    /*default constructor*/
    WrongCat();
    /*destructor*/
    ~WrongCat();
    /*public method functions*/
    void makeSound() const;
};

#endif
