/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 08:12:36 by kali              #+#    #+#             */
/*   Updated: 2024/07/13 12:23:34 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &source) : Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = source.type;
    this->brain = new Brain();
    *(this->brain) = *(source.getBrain());
}

Dog Dog::operator=(const Dog &source)
{
    std::cout << "Operator assignment constructor called" << std::endl;
    this->type = source.type;
    return(*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makesound()
{
    std::cout << "woof I suppose" << std::endl;
}

void Dog::set_idea(std::string new_idea, int n)
{
    brain->set_idea(new_idea, n);
}

void Dog::get_idea(int n)
{
    brain->get_idea(n);
}

Brain* Dog::getBrain() const
{
    return(this->brain);
}