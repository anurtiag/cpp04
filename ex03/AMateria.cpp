/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:03:28 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/27 15:13:19 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    type = "amateria";
    std::cout << "AMateria default constructor called" << std::endl;
}


AMateria::AMateria(std::string const &type)
{
    std::cout << "default AMateria constructor called" << std::endl;
    this->type = type;
}


AMateria::AMateria(AMateria const &source)
{
    std::cout << "Amateria copy constructor called" << std::endl;
    *this = source;
}


AMateria& AMateria::operator=(AMateria const &source)
{
    std::cout << "default AMateria constructor called" << std::endl;
    *this = source;
    return(*this);
}


AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

std::string const & AMateria::getType() const
{
    return(this->type);
}