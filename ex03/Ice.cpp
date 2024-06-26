/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:45:18 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/26 11:20:15 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria(type)
{
    this->type = type;
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice &source) : AMateria(source)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = source;
}

Ice& Ice::operator=(Ice &source)
{
    std::cout << "Ice copy assignment called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}



void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.name << std::endl;
}
