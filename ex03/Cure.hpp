#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <iostream>
# include "AMateria.hpp"


class Cure : public AMateria
{
    protected:
        std::string type;
    public:
        Cure();
        Cure(Cure &source);
        Cure& operator=(Cure &source);
        ~Cure();
        void use(ICharacter& target);
};

#endif
