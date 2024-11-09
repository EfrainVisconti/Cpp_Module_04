/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:16:25 by codespace         #+#    #+#             */
/*   Updated: 2024/11/09 00:00:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# define SIZE 4

class AMateria;

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria    *_slot[SIZE];
        int _sizeFloor;
        AMateria    **_floor;

    public:
        Character();
        Character(const std::string name);
        ~Character();
        Character(const Character &other); //Copy constructor
        Character   &operator=(const Character &other); //Copy assignment operator

        std::string const   &getName() const;
        void    equip(AMateria* m);
        void    unequip(int idx);
        void    use(int idx, ICharacter &target);
};

#endif