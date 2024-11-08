/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:19:12 by codespace         #+#    #+#             */
/*   Updated: 2024/11/08 18:08:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice &other)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = other;
}

Ice    &Ice::operator=(const Ice &other)
{
    std::cout << "Ice copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria    *Ice::clone() const
{
    std::cout << "Ice clone called" << std::endl;
    AMateria *cln = new Ice(*this);
    return cln;
}