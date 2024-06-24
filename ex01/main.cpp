/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 08:14:08 by kali              #+#    #+#             */
/*   Updated: 2024/06/24 13:54:37 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    Animal jerry;
    Cat tom;
    Dog spike;

    jerry.makesound();
    tom.makesound();
    spike.makesound();
    return(0);
}