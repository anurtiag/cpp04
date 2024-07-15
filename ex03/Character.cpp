/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:47:36 by anurtiag          #+#    #+#             */
/*   Updated: 2024/07/15 16:21:21 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    this->name = "default";
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    floorIndex = 0;
    Floor = NULL;
    std::cout << "Character default constructor called" << std::endl;
}


Character::Character(std::string name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    floorIndex = 0;
    Floor = NULL;
    std::cout << "Character param constructor called" << std::endl;
}


Character::Character(Character &source)
{
    std::cout << "Character copy constructor called" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if(source.inventory[i] != NULL)
            this->inventory[i] = source.inventory[i]->clone();
    }
}


Character& Character::operator=(Character &source)
{
    std::cout << "Character copy assignment called" << std::endl;
    *this = source;
    return(*this);
}


Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if(inventory[i])
            delete inventory[i];
    }
    delete[] Floor;
    Floor = NULL;
}


std::string const & Character::getName() const
{
    return(name);
}


void Character::use(int idx, ICharacter& target)
{
    if ((idx >= 0 && idx < 4) && inventory[idx] != NULL)
    {
        inventory[idx]->use(target);
    }
}


void Character::equip(AMateria* m)
{
    int i = 0;
    while(inventory[i] != NULL)
        i++;
    if (i >= 0 && i < 4 && m != NULL)
    {
        inventory[i] = m;
        std::cout << name << " has equipped " << m->getType() << std::endl;
    }
    else
        std::cout << "coudnt equip matery " << m->getType() << std::endl;
}


void Character::unequip(int idx)
{
    if(inventory[idx])
    {
        floorIndex++;
        AMateria** newFloor = new AMateria*[floorIndex];
        for(int i = 0; i < (floorIndex); i++)
            newFloor[i] = Floor[i];
        newFloor[floorIndex] = inventory[idx];
        inventory[idx] = NULL;
        delete Floor;
        Floor = newFloor;
    }
}
