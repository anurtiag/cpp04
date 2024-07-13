#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <iostream>
# include "AMateria.hpp"


class Cure : public AMateria
{
    protected:

    public:
        Cure();
        Cure(Cure const &source);
        Cure& operator=(Cure const &source);
        ~Cure();
        void use(ICharacter& target);
        AMateria* clone() const;
};

#endif
