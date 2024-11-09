/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:16:13 by codespace         #+#    #+#             */
/*   Updated: 2024/11/09 01:54:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default"), _sizeFloor(0), _floor(NULL)
{
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0, i < SIZE, i++)
        this->_slot[i] = NULL;
}

Character::Character(std::string const &name) : _name(name), _sizeFloor(0), _floor(NULL)
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
            delete this->_slot[i];
    }
    if (this->_floor != NULL)
        delete [] this->_floor;
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
            if (other._slot[i] != NULL)
                this->_slot[i] = other._slot[i]->clone();
            else
                this->_slot[i] = NULL;
        }
        if (this->_floor != NULL)
        {
            delete [] this->_floor;
            this->_floor = NULL;
            this->_sizeFloor = 0;
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
    delete m;
}

void    Character::unequip(int idx)
{
    if (idx < 0 || idx >= SIZE || this->_slot[idx] == NULL)
    {
        std::cout << "Invalid idx passed to Character::unequip: " << this->_name << std::endl;
        return ;
    }
    this->_sizeFloor++;
    AMateria** newFloor = new AMateria*[this->_sizeFloor];
    for (int i = 0; i < this->_sizeFloor - 1; i++)
        newFloor[i] = this->_floor[i];
    newFloor[this->_sizeFloor - 1] = this->_slot[idx];
    this->_slot[idx] = NULL;
    delete [] this->_floor;
    this->_floor = newFloor;
}