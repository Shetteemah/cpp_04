#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
    std::string _ideas[100];

public:
    /*default constructor*/
    Brain();
    /*copy constructor*/
    Brain(const Brain &copy);
    /*destructor*/
    ~Brain();
    /*overload operator*/
    Brain &operator=(const Brain &src);
    /*public method functions*/
    std::string getIdea(size_t index) const;
    void setIdea(size_t index, std::string idea);
};

#endif
