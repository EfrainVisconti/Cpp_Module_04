/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:35:07 by codespace         #+#    #+#             */
/*   Updated: 2024/11/10 11:49:52 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

#define SIZE 4
#define INDEX 0
const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";

int main()
{
    {
        const Animal *animals[SIZE];

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
            std::cout << dynamic_cast<const Cat*>(animals[i])->getBrainIdeas(INDEX) << std::endl;
            dynamic_cast<const Cat*>(animals[i])->setBrainIdeas("diff_idea", INDEX);
            std::cout << dynamic_cast<const Cat*>(animals[i])->getBrainIdeas(INDEX) << std::endl;
        }

        std::cout << std::endl << GREEN << "-----Deleting Cats and Dogs-----" << RESET << std::endl;
        for (int i = 0; i < SIZE; i++)
        {
            std::cout << GREEN << i << RESET << std::endl;
            delete animals[i];
        }
    }
    {
        std::cout << std::endl << GREEN << "-----Deep copies test-----" << RESET << std::endl;
        Dog a;
        Dog b;
        std::cout << "Dog 'a' idea 0 before change: " << a.getBrainIdeas(INDEX) << std::endl;
        a.setBrainIdeas("test_idea", INDEX);
        std::cout << "Dog 'a' idea 0 after change: " << a.getBrainIdeas(INDEX) << std::endl;
        b = a;
        std::cout << "Dog 'b' idea 0 to show copy: " << a.getBrainIdeas(INDEX) << std::endl;
    }
	//Animal test;
    return 0;
}