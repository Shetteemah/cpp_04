#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define CAT1 "Jump on human desk and make a mess!"
#define CAT2 "Ignore human!"
#define CAT3 "Lay down and stretch all day!"
#define CAT4 "Do some savage sh*t like scratch human!"
#define DOG1 "Jump on human desk and make a mess!"
#define DOG2 "Ignore human!"
#define DOG3 "Lay down and stretch all day!"
#define DOG4 "Do some savage sh*t like scratch human!"

typedef enum e_animalThought
{
    CTHGHT1 = 1,
    CTHGHT2 = 2,
    CTHGHT3 = 3,
    CTHGHT4 = 4,
    DTHGHT1 = 5,
    DTHGHT2 = 6,
    DTHGHT3 = 7,
    DTHGHT4 = 8
} t_animalThought;

/*my class*/
class Animal
{
    /*protected variable*/
protected:
    std::string _type;

    /*public variable*/
public:
    /*default constructor*/
    Animal();
    /*copy constructor*/
    Animal(const Animal &copy);
    /*destructor*/
    virtual ~Animal();
    /*overload operator*/
    Animal &operator=(const Animal &src);
    /*public method functions (getter)*/
    std::string getType() const;
    /*public method functions*/
    virtual void makeSound() const;
};

#endif
