/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:30:22 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/25 11:39:13 by anurtiag         ###   ########.fr       */
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

void Brain::set_idea(std::string new_idea, int n)
{
    if (n < 0 || n > 99)
    {
        std::cout << "Invalid idea number :(" << std::endl;
        return;
    }
    ideas[n] = new_idea;
}

void Brain::get_idea(int n)
{
    if((n < 0 || n > 99) || (ideas[n].empty()))
        std::cout << "my brain is empty :(" << std::endl;
    else
        std::cout << ideas[n] << std::endl;
}