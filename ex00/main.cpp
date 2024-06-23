/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 08:14:08 by kali              #+#    #+#             */
/*   Updated: 2024/06/23 08:16:47 by kali             ###   ########.fr       */
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