/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:32:56 by codespace         #+#    #+#             */
/*   Updated: 2024/11/04 21:32:59 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string const type) : type(type)
{
    std::cout << "Animal constructor called: " << this->type << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called: " << this->type << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called: " << other.type << std::endl;
    *this = other;
}

Animal   &Animal::operator=(const Animal &other)
{
    std::cout << "Animal copy assignment operator called: " << other.type << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void    Animal::makeSound() const
{
    std::cout << "*The Sound of Silence*" << std:: endl;
}