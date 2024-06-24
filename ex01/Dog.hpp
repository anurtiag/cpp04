/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 07:50:59 by kali              #+#    #+#             */
/*   Updated: 2024/06/23 08:19:06 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <string>
# include <iostream>

class Dog : public Animal
{
    protected:
        std::string type;
    public:
        Dog();
        Dog(const Dog &source);
        Dog operator=(const Dog &source);
        ~Dog();
        void makesound();
};


#endif