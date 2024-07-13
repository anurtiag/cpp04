/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 08:14:08 by kali              #+#    #+#             */
/*   Updated: 2024/07/13 12:12:04 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    Animal jerry;
    Cat tom;
    Dog spike;
    Animal *animal[100];
    for(int i = 0; i < 50; i++)
    {
        animal[i] = new Dog();
        animal[i + 50] = new Cat();
    }
    jerry.makesound();
    tom.makesound();
    spike.makesound();
    tom.setIdea("ive got an idea!", 0);
    Cat tom_copy(tom);
    tom.getIdea(0);
    tom.getIdea(1);
    spike.setIdea("ive got a bad idea!", 100);
    spike.getIdea(-1000000000);
    std::cout << std::endl << std::endl << std::endl;
    animal[37]->makesound();
    animal[77]->makesound();
    animal[37]->setIdea("ive got another idea!", 0);
    animal[37]->getIdea(0);
    animal[77]->setIdea("i have a lot of ideas!", 0);
    animal[77]->getIdea(0);
    tom.printIdea(); tom_copy.printIdea();
    tom.getIdea(0);
    tom_copy.getIdea(0);
    for (int i = 0; i < 100; i++)
        delete animal[i];
    return(0);
}