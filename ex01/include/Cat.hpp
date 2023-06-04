#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

/*my class*/
class Cat : public Animal
{
    /*private variable*/
private:
    Brain *_brain;

    /*public variable*/
public:
    /*default constructor*/
    Cat();
    /*copy constructor*/
    Cat(const Cat &copy);
    /*destructor*/
    ~Cat();
    /*overload operator*/
    Cat &operator=(const Cat &src);
    /*public method functions*/
    void makeSound() const;
    /*public method functions (getter)*/
    void getIdea() const;
    /*public method functions (setter)*/
    void setIdea(size_t index, std::string idea);
};

#endif
