/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:20:52 by codespace         #+#    #+#             */
/*   Updated: 2024/11/09 01:46:25 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# define SIZE 4

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _materia[SIZE];
        
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource   &operator=(const MateriaSource &other);

        void    learnMateria(AMateria *m);
        AMateria*   createMateria(std::string const &type);
};

#endif