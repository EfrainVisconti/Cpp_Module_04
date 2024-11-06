/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:38:03 by codespace         #+#    #+#             */
/*   Updated: 2024/11/06 14:36:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    std::stringstream ss;
	for (int i = 0; i < 100; i++)
	{
		ss << i;
		this->_ideas[i] = "idea_" + ss.str();
	}
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain   &Brain::operator=(const Brain &other)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return *this;
}

std::string Brain::getIdeas(int index) const
{
    if (index >= 0 && index < 100)
		return this->_ideas[index];
	return "Invalid number";
}

void	Brain::setIdeas(const std::string new, int index)
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = new;
}