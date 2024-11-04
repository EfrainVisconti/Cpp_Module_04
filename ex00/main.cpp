/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 12:56:30 by codespace         #+#    #+#             */
/*   Updated: 2024/11/04 20:52:11 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";

int main()
{
    {
        std::cout << std::endl << GREEN << "-----Animal Class tests-----" << RESET << std::endl;
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }
    {
        std::cout << std::endl << GREEN << "-----WrongAnimal Class tests-----" << RESET << std::endl;
        const WrongAnimal* meta1 = new WrongAnimal();
        const WrongAnimal* i1 = new WrongCat();
        const WrongCat* j1 = new WrongCat();
        std::cout << i1->getType() << " " << std::endl;
        i1->makeSound();
        meta1->makeSound();
        j1->makeSound();
        delete meta1;
        delete i1;
        delete j1;
    }
    return 0;
}