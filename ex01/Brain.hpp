/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:37:43 by codespace         #+#    #+#             */
/*   Updated: 2024/11/05 02:05:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
    private:
        std::string _ideas[100];

    public:
        Brain();
        ~Brain();
        Brain(const Brain &other); //Copy constructor
        Brain &operator=(const Brain &other); //Copy assignment operator

        std::string getIdeas(int index) const;
};

#endif