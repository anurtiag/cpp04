#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <iostream>


class Cure
{
    protected:
        
    public:
        Cure();
        Cure(Cure &source);
        Cure& operator=(Cure &source);
        ~Cure();
};

#endif
