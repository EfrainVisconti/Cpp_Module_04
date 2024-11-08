/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:34:48 by codespace         #+#    #+#             */
/*   Updated: 2024/11/08 16:25:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain   *_brain;

    public:
        Dog();
        ~Dog();
        Dog(const Dog &other); //Copy constructor
        Dog &operator=(const Dog &other); //Copy assignment operator
        void    makeSound() const;

        std::string getBrainIdeas(const int index) const;
        void    setBrainIdeas(const std::string idea, const int index) const;
};

#endif