/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:05:07 by codespace         #+#    #+#             */
/*   Updated: 2024/11/08 16:24:34 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(std::string const type);
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &other); //Copy constructor
        WrongAnimal &operator=(const WrongAnimal &other); //Copy assignment operator

        std::string getType() const;
        void makeSound() const;
};

#endif