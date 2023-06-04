#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

/*my class*/
class Cat : public Animal {
/*publice variable*/
public:
    /*default constructor*/
    Cat();
    /*destructor*/
    ~Cat();
    /*public method functions*/
    void makeSound() const;
};

#endif
