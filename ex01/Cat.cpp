/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:33:54 by codespace         #+#    #+#             */
/*   Updated: 2024/11/05 02:26:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete this->_brain;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_brain = new Brain(*(other._brain));
}

Cat   &Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    if (this->_brain != NULL)
        delete this->_brain;
    this->type = other.type;
    this->_brain = new Brain(*(other._brain));
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "Meowwwww" << std::endl;
}