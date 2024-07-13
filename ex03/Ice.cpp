/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:45:18 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/29 14:19:05 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    // this->type = "ice";
    std::cout << "Ice default constructor called" << std::endl;
}


Ice::Ice(Ice const &source) : AMateria(source)
{
    std::cout << "Ice copy constructor called" << std::endl;
    this->type = source.type;
}


Ice& Ice::operator=(Ice const &source)
{
    std::cout << "Ice copy assignment called" << std::endl;
    this->type = source.type;
    return(*this);
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}


void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}


AMateria* Ice::clone() const
{
   AMateria* c;
   c = new Ice(*this);
   return(c);
}