/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:04:35 by codespace         #+#    #+#             */
/*   Updated: 2024/11/04 14:54:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongCat.hpp"

class WrongCat
{
    public:
        WrongCat();
        WrongCat(std::string const name);
        WrongCat(const WrongCat &other); //Copy constructor
        WrongCat &operator=(const WrongCat &other); //Copy assignment operator
        WrongCat();
};

#endif