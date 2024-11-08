/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:07:36 by codespace         #+#    #+#             */
/*   Updated: 2024/11/08 17:48:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("default")
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const type) : type(type)
{
    std::cout << "AMateria constructor called: " << this->type << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called: " << this->type << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "AMateria copy constructor called: " << other.type << std::endl;
    *this = other;
}

AMateria    &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria copy assignment operator called: " << other.type << std::endl;
    return *this;
}

std::string const   &AMateria::getType() const
{
    return this->type;
}

void    AMateria::use(ICharacter &target)
{
    std::cout << "AMateria use called" << std::endl;
    (void)target;
}