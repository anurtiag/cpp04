/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:21:17 by anurtiag          #+#    #+#             */
/*   Updated: 2024/07/13 14:26:08 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for(int i = 0; i < 4; i++)
        matery[i] = NULL;
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
    for (int i = 0; i < 4; i++)
    {
        if (matery[i] != 0)
            delete matery[i];
    }
}


void MateriaSource::learnMateria(AMateria* source)
{
    for(int i = 0; i < 4; i++)
    {
        if (matery[i] == NULL)
            matery[i] = source;
    }
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (type == matery[i]->getType())
            return(matery[i]->clone());
    }
    return(0);
}
