/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 07:50:56 by kali              #+#    #+#             */
/*   Updated: 2024/07/13 12:24:00 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class Cat : public Animal
{
    protected:
        std::string type;
        Brain *brain;
    public:
        Cat();
        Cat(Cat &source);
        Cat operator=(Cat &source);
        ~Cat();
        void makesound();
        void get_idea(int n);
        void set_idea(std::string new_idea, int n);
        Brain* getBrain() const;
};


#endif