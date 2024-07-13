/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:47:51 by anurtiag          #+#    #+#             */
/*   Updated: 2024/07/13 14:41:22 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ICharacter.hpp"


class Character : public ICharacter
{
    protected:
        std::string name;
        AMateria* inventory[4];
        std::vector<AMateria*> floor;
        int floorIndex;
        AMateria** Floor;
    public:
        Character();
        Character(std::string name);
        Character(Character &source);
        Character& operator=(Character &source);
        ~Character();
        std::string const & getName() const;
        void use(int idx, ICharacter& target);
        void equip(AMateria* m);
        void unequip(int idx);
};

#endif
