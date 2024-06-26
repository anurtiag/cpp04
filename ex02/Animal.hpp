/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 05:51:23 by kali              #+#    #+#             */
/*   Updated: 2024/06/26 09:16:30 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &source);
        Animal& operator=(const Animal &source);
        virtual ~Animal();
        virtual void makesound() = 0;
        virtual void get_idea(int n) = 0;
        virtual void set_idea(std::string new_idea, int n) = 0;
};


#endif