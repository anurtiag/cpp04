/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:32:54 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/26 15:32:58 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure()
{
    this->type = type;
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


void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.name << "'s wounds *" << std::endl;
}
