/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:30:22 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/24 12:47:50 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain &source)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = source.ideas[i];
}

Brain Brain::operator=(Brain &source)
{
    std::cout << "Brain copy assignment called" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = source.ideas[i];
    return(*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}