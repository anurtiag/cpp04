#include "Cure.hpp"


Cure::Cure()
{
    std::cout << "Cure default constructor called" << std::endl;
}


Cure::Cure(Cure &source)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = source;
}


Cure& Cure::operator=(Cure &source)
{
    std::cout << "Cure copy assignment called" << std::endl;
    *this = source;
    return(*this);
}


Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}
