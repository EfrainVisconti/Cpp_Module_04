/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:01:00 by codespace         #+#    #+#             */
/*   Updated: 2024/11/03 21:40:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Animal.hpp"

class Animal
{
    public:
        Animal();
        Animal(std::string const name);
        Animal(const Animal &other); //Copy constructor
        Animal &operator=(const Animal &other); //Copy assignment operator
        Animal();
};

#endif