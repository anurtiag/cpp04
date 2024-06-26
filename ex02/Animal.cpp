/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 06:06:44 by kali              #+#    #+#             */
/*   Updated: 2024/06/26 09:16:25 by anurtiag         ###   ########.fr       */
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

Animal& Animal::operator=(const Animal &source)
{
    std::cout << "Operator assignment constructor called" << std::endl;
    this->type = source.type;
    return(*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makesound()
{
    std::cout << "I Unga therefore I Bunga" << std::endl;
}

void Animal::set_idea(std::string new_idea, int n)
{
    (void)new_idea;
    (void)n;
}

void Animal::get_idea(int n)
{
    (void)n;
}