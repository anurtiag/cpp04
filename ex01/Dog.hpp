/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 07:50:59 by kali              #+#    #+#             */
/*   Updated: 2024/06/25 09:10:37 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class Dog : public Animal
{
    protected:
        std::string type;
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &source);
        Dog operator=(const Dog &source);
        ~Dog();
        void makesound();
};


#endif