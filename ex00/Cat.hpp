/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 07:50:56 by kali              #+#    #+#             */
/*   Updated: 2024/06/24 13:51:21 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <string>
# include <iostream>

class Cat : public Animal
{
    protected:
        std::string type;
    public:
        Cat();
        Cat(const Cat &source);
        Cat operator=(const Cat &source);
        ~Cat();
        void makesound();
};


#endif