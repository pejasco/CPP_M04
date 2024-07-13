/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 01:00:36 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/13 16:05:53 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
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
    std::cout << "* shoots an ice bolt at " << << "*\n";
}

