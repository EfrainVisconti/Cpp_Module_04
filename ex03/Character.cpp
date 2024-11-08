/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:16:13 by codespace         #+#    #+#             */
/*   Updated: 2024/11/08 20:32:25 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default")
{
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0, i < SIZE, i++)
        this->_slot[i] = NULL;
}

Character::Character(std::string const &name) : _name(name)
{
    std::cout << "Character constructor called: " << this->_name << std::endl;
    for (int i = 0, i < SIZE, i++)
        this->_slot[i] = NULL;
}

Character::~Character()
{
    std::cout << "Character destructor called: " << this->_name << std::endl;
    for (int i = 0, i < SIZE, i++)
    {
        if (this->_slot[i] != NULL)
        {
            delete this->_slot[i];
            this->_slot[i] = NULL;
        }
    }
}

Character::Character(const Character &other)
{
    std::cout << "Character copy constructor called: " << other._name << std::endl;
    *this = other;
}

Character   &Character::operator=(const Character &other)
{
    std::cout << "Character copy assignment operator called: " << other._name << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < SIZE; i++)
        {
            if (this->_slot[i] != NULL)
            {
                delete this->_slot[i];
                this->_slot[i] = NULL;
            }
            this->_slot[i] = other._slot[i]->clone();
        }
    }
    return *this;
}

std::string const   &Character::getName() const
{
    return this->_name;
}

void    Character::use(int idx, ICharacter &target)
{
    std::cout << "Character use called: " << this->_name << std::endl;
    if (idx >= 0 && idx < SIZE && this->_slot[idx] != NULL)
        this->_slot[idx]->use(target);
    else
        std::cout << "Invalid idx passed to Character::use: " << this->_name << std::endl;
}

void    Character::equip(AMateria* m)
{
    if (!m)
	{
		std::cout << "Character " << this->_name << "can't equip empty materia" << std::endl;
		return ;
	}
    for (int i = 0; i < SIZE; i++)
    {
        if (this->_slot[i] == NULL)
        {
            std::cout << "Character " << this->_name << " adding " << m->getType() << " to inventory" << std::endl;
            this->_slot[i] = m;
            return ;
        }
    }
    std::cout << "Character " << this->_name << " has a full inventory, cannot add " << m->getType() << std::endl;
}

void    Character::unequip(int idx)
{
    if (idx < 0 || idx >= SIZE)
    {
        std::cout << "Invalid idx passed to Character::unequip: " << this->_name << std::endl;
        return ;
    }
    //finish function and handle materia left in floor
}