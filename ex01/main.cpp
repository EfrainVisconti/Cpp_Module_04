/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:35:07 by codespace         #+#    #+#             */
/*   Updated: 2024/11/06 17:48:04 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

#define SIZE 10
const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";

int main()
{
    const Animal *animals[SIZE];
    int index = 0;

    std::cout << std::endl << GREEN << "-----Creating 5 Cats and 5 Dogs-----" << RESET << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << GREEN << i << RESET << std::endl;
        if (i % 2 == 0)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }

    std::cout << std::endl << GREEN << "-----Checking Cats objects-----" << RESET << std::endl;
    for (int i = 0; i < SIZE - 1; i += 2)
    {
        std::cout << GREEN << i << RESET << std::endl;
        animals[i]->makeSound();
        std::cout << animals[i]->getType() << std::endl;
        std::cout << dynamic_cast<const Cat*>(animals[i])->getBrainIdeas(index) << std::endl;
        dynamic_cast<const Cat*>(animals[i])->setBrainIdeas("diff_idea", index);
        std::cout << dynamic_cast<const Cat*>(animals[i])->getBrainIdeas(index) << std::endl;
    }

    std::cout << std::endl << GREEN << "-----Deleting Cats and Dogs-----" << RESET << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << GREEN << i << RESET << std::endl;
        delete animals[i];
    }
    //TO DO: TEST DEEP COPY
    return 0;
}