/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scofield <Scofield@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:20 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/12 01:46:33 by Scofield         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain constructor has been called.\n";
};

Brain::~Brain()
{
    std::cout << "Brain destructor has been called.\n";
}

Brain::Brain(const Brain& other)
{
    for (int i = 0; i < 100; ++i)
        ideas_[i] = other.ideas_[i];
    std::cout << "Brain copy constructor has been called.\n";
}

Brain& Brain::operator=(const Brain& other)
{
    if (this == &other)
        return *this;
    for (int i = 0; i < 100; ++i)
        ideas_[i] = other.ideas_[i];
    std::cout << "Brain copy assignment operator has been called.\n";
    return *this;
}

void Brain::setIdea(const int index, const std::string& idea)
{
    if (index < 0 || index >= 100)
        return;
    ideas_[index] = idea;
}

void Brain::getIdea(int index)
{

    std::cout << ideas_[index] << "\n";
}

