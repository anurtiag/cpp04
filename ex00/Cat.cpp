/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 07:50:50 by kali              #+#    #+#             */
/*   Updated: 2024/07/13 10:55:17 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &source) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = source.type;
}

Cat Cat::operator=(const Cat &source)
{
    std::cout << "Operator assignment constructor called" << std::endl;
    this->type = source.type;
    return(*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow I suppose" << std::endl;
}