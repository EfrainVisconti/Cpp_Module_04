/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:03:29 by codespace         #+#    #+#             */
/*   Updated: 2024/11/03 21:42:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Cat.hpp"

class Cat
{
    public:
        Cat();
        Cat(std::string const name);
        Cat(const Cat &other); //Copy constructor
        Cat &operator=(const Cat &other); //Copy assignment operator
        Cat();
};

#endif