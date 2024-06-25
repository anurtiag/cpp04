/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:03:28 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/25 13:58:35 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    std::cout << "default AMateria constructor called" << std::endl;
    this->type = type;
}

AMateria::AMateria(AMateria &source)
{
    std::cout << "Amateria copy constructor called" << std::endl;
    *this = source;
}

AMateria AMateria::operator=(AMateria &source)
{
    std::cout << "default AMateria constructor called" << std::endl;
    *this = source;
    return(*this);
}

AMateria::~AMateria()
{
    std::cout << "AMaateria destructor called" << std::endl;
}