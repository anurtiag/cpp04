/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 07:50:50 by kali              #+#    #+#             */
/*   Updated: 2024/07/13 12:14:30 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat &source) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = source.type;
    this->brain = new Brain();
    *(this->brain) = *(source.getBrain());
}

Cat Cat::operator=(Cat &source)
{
    std::cout << "Operator assignment constructor called" << std::endl;
    this->type = source.type;
    return(*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete (this->brain);
}

void Cat::makesound()
{
    std::cout << "meow I suppose" << std::endl;
}

void Cat::setIdea(std::string new_idea, int n)
{
    brain->setIdea(new_idea, n);
}

void Cat::getIdea(int n) const
{
    brain->getIdea(n);
}

void Cat::printIdea() const
{
    std::cout << &(this->brain) << std::endl;
}

Brain* Cat::getBrain() const
{
    return(this->brain);
}