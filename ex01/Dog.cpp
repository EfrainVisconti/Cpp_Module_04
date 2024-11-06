/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:34:25 by codespace         #+#    #+#             */
/*   Updated: 2024/11/06 14:45:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete this->_brain;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brain = new Brain(*(other._brain));
}

Dog   &Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    if (this->_brain != NULL)
        delete this->_brain;
    this->type = other.type;
    this->_brain = new Brain(*(other._brain));
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Woofffff" << std::endl;
}

std::string Dog::getBrainIdeas(const int index) const
{
    return this->_brain->getIdeas(index);
}

void	Dog::setBrainIdeas(const std::string new, const int index)
{
    this->_brain->setIdeas(new, index);
}