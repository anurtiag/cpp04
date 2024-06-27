/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 08:14:08 by kali              #+#    #+#             */
/*   Updated: 2024/06/27 11:30:40 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    // Animal jerry;
    Cat tom;
    Dog spike;
    Animal *animal[100];

    for(int i = 0; i < 50; i++)
    {
        animal[i] = new Dog();
        animal[i + 50] = new Cat();
    }
    // jerry.makesound();
    tom.makesound();
    spike.makesound();
    tom.set_idea("ive got an idea!", 0);
    tom.get_idea(0);
    tom.get_idea(1);
    spike.set_idea("ive got a bad idea!", 100);
    spike.get_idea(-1000000000);
    std::cout << std::endl << std::endl << std::endl;
    animal[37]->makesound();
    animal[77]->makesound();
    animal[37]->set_idea("ive got another idea!", 0);
    animal[37]->get_idea(0);
    animal[77]->set_idea("i have a lot of ideas!", 0);
    animal[77]->get_idea(0);
    for (int i = 0; i < 100; i++)
        delete animal[i];
    return(0);
}