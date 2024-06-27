/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:45:15 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/27 12:12:23 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
    protected:
        std::string type;
    public:
        Ice();
        Ice(Ice const &source);
        Ice& operator=(Ice const &source);
        ~Ice();
        void use(ICharacter& target);
        AMateria* clone() const;
};


#endif