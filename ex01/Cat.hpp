/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:34:10 by codespace         #+#    #+#             */
/*   Updated: 2024/11/04 22:42:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain   *_brain;

    public:
        Cat();
        ~Cat();
        Cat(const Cat &other); //Copy constructor
        Cat &operator=(const Cat &other); //Copy assignment operator
        void    makeSound() const;
};

#endif