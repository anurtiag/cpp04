/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:47:36 by anurtiag          #+#    #+#             */
/*   Updated: 2024/07/13 13:27:33 by anurtiag         ###   ########.fr       */
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
    std::cout << "Character param constructor called" << std::endl;
}


Character::Character(Character &source)
{
    std::cout << "Character copy constructor called" << std::endl;
    *this = source;
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
    for (std::vector<AMateria*>::iterator it = floor.begin(); it != floor.end(); ++it)
        delete *it;
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
    if (i >= 0 && i < 4)
        inventory[i] = m;
    std::cout << name << " has equipped " << std::endl;
    if (m == 0)
        std::cout << "no has clonado la materia puto bobo" << std::endl;
}


void Character::unequip(int idx)
{
    if(inventory[idx])
    {
        floor.push_back(this->inventory[idx]);
        inventory[idx] = NULL;
        floorIndex++;
        AMateria** newFloor = new AMateria*[floorIndex];
        for(int i = 0; i < (floorIndex - 1); i++)
            newFloor[i] = Floor[i];
        delete Floor;
        Floor = newFloor;
    }
}
