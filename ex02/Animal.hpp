/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:33:20 by codespace         #+#    #+#             */
/*   Updated: 2024/11/07 18:17:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string const type);
        virtual ~Animal();
        Animal(const Animal &other); //Copy constructor
        Animal &operator=(const Animal &other); //Copy assignment operator

        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif