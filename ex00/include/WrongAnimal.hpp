#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

/*my class*/
class WrongAnimal {
/*protected variable*/
protected:
    std::string type;

/*publice variable*/
public:
    /*default constructor*/
    WrongAnimal();
    /*destructor*/
    ~WrongAnimal();
    /*public method functions*/
    void makeSound() const;
};

#endif
