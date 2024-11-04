/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:05:07 by codespace         #+#    #+#             */
/*   Updated: 2024/11/04 15:00:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "WrongAnimal.hpp"

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string const name);
        WrongAnimal(const WrongAnimal &other); //Copy constructor
        WrongAnimal &operator=(const WrongAnimal &other); //Copy assignment operator
        WrongAnimal();
};

#endif