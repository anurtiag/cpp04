/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:21:25 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/27 09:13:55 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"


class MateriaSource : public IMateriaSource
{
    protected:
        AMateria* matery[4]; 
    public:
        MateriaSource();
        MateriaSource(MateriaSource &source);
        MateriaSource& operator=(MateriaSource &source);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif
