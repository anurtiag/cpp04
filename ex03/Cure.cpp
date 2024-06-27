/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:32:54 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/27 15:21:11 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure() : AMateria()
{
    this->type = "cure";
    std::cout << "Cure default constructor called" << std::endl;
}


Cure::Cure(Cure const &source) :  AMateria(source)
{
    std::cout << "Cure copy constructor called" << std::endl;
    this->type = source.type;
}


Cure& Cure::operator=(Cure const &source)
{
    std::cout << "Cure copy assignment called" << std::endl;
    this->type = source.type;
    return(*this);
}


Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}


void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
   AMateria* c;
   c = new Cure(*this);
   std::cout << "pasamos por aqui y hemos clonado " << c->getType();
   return(c);
}