/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:21:17 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/26 16:30:39 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
}


MateriaSource::MateriaSource(MateriaSource &source)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = source;
}


MateriaSource& MateriaSource::operator=(MateriaSource &source)
{
    std::cout << "MateriaSource copy assignment called" << std::endl;
    *this = source;
    return(*this);
}


MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type == "Ice")
    {
        new Ice* m();
    }
}
