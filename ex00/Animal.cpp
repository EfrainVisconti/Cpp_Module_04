/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:00:39 by codespace         #+#    #+#             */
/*   Updated: 2024/11/04 15:51:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Animal   &Animal::operator=(const Animal &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = other.value;
    return *this;
}