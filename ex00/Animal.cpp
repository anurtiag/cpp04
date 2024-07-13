/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 06:06:44 by kali              #+#    #+#             */
/*   Updated: 2024/07/13 10:54:59 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &source)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = source.type;
}

Animal Animal::operator=(const Animal &source)
{
    std::cout << "Operator assignment constructor called" << std::endl;
    this->type = source.type;
    return(*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "I Unga therefore I Bunga" << std::endl;
}

std::string Animal::getType() const
{
    // std::cout << "el tipo es " << this->type << std::endl;
    return(this->type);
}

void Animal::setType(const std::string& newType)
{
    this->type = newType;
}