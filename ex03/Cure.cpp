/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:16:49 by codespace         #+#    #+#             */
/*   Updated: 2024/11/08 18:02:59 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure &other)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = other;
}

Cure    &Cure::operator=(const Cure &other)
{
    std::cout << "Cure copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria    *Cure::clone() const
{
    std::cout << "Cure clone called" << std::endl;
    AMateria *cln = new Cure(*this);
    return cln;
}