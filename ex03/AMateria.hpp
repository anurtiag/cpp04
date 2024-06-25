/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:03:25 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/25 13:51:52 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class AMateria
{
    protected:
        std::string type;  
    public:
        AMateria(std::string const & type);
        AMateria(AMateria &source);
        ~AMateria();
        std::string const & getType() const;
        AMateria operator=(AMateria &source);
        virtual AMateria* clone() const = 0;
        // virtual void use(ICharacter& target);
};

#endif