/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 01:00:36 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/15 16:31:58 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
    std::cout << "[Ice] constructor has been called.\n";
}

Ice::~Ice()
{
    std::cout << "[Ice] destructor has been called.\n";
}

Ice::Ice(const Ice& other) : AMateria(other)
{
    std::cout << "[Ice] copy constructor has been called.\n";
}

Ice& Ice::operator=(const Ice& other)
{
    if (this == &other)
        return *this;
    type_ = other.type_; 
    std::cout << "[Ice] copy assignment operator has been called.\n";
    return *this;
}

Ice* Ice::clone() const
{
    Ice* clone = new Ice(*this);
     std::cout << "[Ice] a new clone made\n";
    return clone;
}

void Ice::use(ICharacter& target)
{
    //std::cout << "*" << " shoots an ice bolt at " << target.getName() << " *\n";
    std::cout << " shoots an ice bolt at " << target.getName() << " *\n";
}

