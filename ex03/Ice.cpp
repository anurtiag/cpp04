/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:45:18 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/25 13:57:09 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria(type)
{
    std::cout << "Ice defaullt constructor called" << std::endl;
}

Ice::Ice(Ice &source) 
{
    
}