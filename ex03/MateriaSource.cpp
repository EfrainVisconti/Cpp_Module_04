/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:20:23 by codespace         #+#    #+#             */
/*   Updated: 2024/11/09 02:18:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < SIZE; i++)
        this->_materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (this->_materia[i] != NULL)
            delete this->_materia[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = other;
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "MateriaSource copy assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (this->_materia[i] != NULL)
            {
                delete this->_materia[i];
                this->_materia[i] = NULL;
            }
            if (other._materia[i] != NULL)
                this->_materia[i] = other._materia[i]->clone();
            else
                this->_materia[i] = NULL;
        }
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
	{
		std::cout << "MateriaSource::learnMateria can't do anything receiving NULL" << std::endl;
		return ;
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = m;
			std::cout << "MateriaSource learnMateria called with: "<< this->_materia[i]->getType() << std::endl;
            return ;
		}
	}
	std::cout << "MateriaSource object is full, can't add more Materia" << std::endl;
    delete m;
}

AMateria*   MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < SIZE; i++)
    {
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
        {
            std::cout << "MateriaSource createMateria called successfully with: "<< type << std::endl;
            return this->_materia[i]->clone();
        }
	}
    std::cout << "MateriaSource createMateria failed finding type: "<< type << std::endl;
	return NULL;
}