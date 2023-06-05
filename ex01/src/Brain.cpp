#include "../include/Brain.hpp"

Brain::Brain()
{
    std::cout << "|\033[33m" << "\tConstructing Brain...\t\t\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tBrain constructed!\t\t\t\t\t" << "\033[0m|" << std::endl;
    for (int i = 0; i < 9; i++)
    {
        // _ideas[i] = "Initial Idea";
        if (i == 0)
            _ideas[i] = "Jump on human desk and make a mess!";
        else if (i == 1)
            _ideas[i] = "Ignore human!\t\t\t";
        else if (i == 2)
            _ideas[i] = "Lay down and stretch all day!\t";
        else if (i == 3)
            _ideas[i] = "Do some savage sh*t like scratch human!";
        else if (i == 4)
            _ideas[i] = "Dog1 savage sh*t like scratch human!";
        else if (i == 5)
            _ideas[i] = "Dog2 savage sh*t like scratch human!";
        else if (i == 6)
            _ideas[i] = "Dog3 savage sh*t like scratch human!";
        else if (i == 7)
            _ideas[i] = "Dog4 savage sh*t like scratch human!";
        else
            _ideas[i] = "Last savage sh*t like scratch human!";
    }
}

Brain::~Brain()
{
    std::cout << "|\033[33m" << "\tDestroying Brain...\t\t\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[31m" << "\tBrain destroyed!\t\t\t\t\t" << "\033[0m|" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "|\033[33m" << "\tConstructing copy Brain...\t\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tCopy Brain constructed!\t\t\t\t\t" << "\033[0m|" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout << "|\033[33m" << "\tAssigning Brain operator...\t\t\t\t" << "\033[0m|" << std::endl;
    std::cout << "|\033[32m" << "\tBrain operator assigned!\t\t\t\t" << "\033[0m|" << std::endl;
    if (this == &src)
        return (*this);
    for (int i = 0; i < 100; i++)
        _ideas[i] = src._ideas[i];
    return (*this);
}

std::string Brain::getIdea(size_t index) const
{
    if (index >= 0 && index < 100)
        return _ideas[index];
    return "";
}

void Brain::setIdea(size_t index, std::string idea)
{
    if (index >= 0 && index < 100)
        _ideas[index] = idea;
}
