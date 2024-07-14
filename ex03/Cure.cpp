/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:56:28 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/14 15:54:37 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("Cure")
{
    std::cout << "[Cure] constructor has been called.\n";
}

Cure::~Cure()
{
    std::cout << "[Cure] destructor has been called.\n";
}

Cure::Cure(const Cure& other) : AMateria(other)
{
    std::cout << "[Cure] copy constructor has been called.\n";
}

Cure& Cure::operator=(const Cure& other)
{
    if (this == &other)
        return *this;
    type_ = other.type_; 
    std::cout << "[Cure] copy assignment operator has been called.\n";
    return *this;
}

Cure* Cure::clone() const
{
    Cure* clone = new Cure(*this);
     std::cout << "[Cure] a new clone made\n";
    return clone;
}

void Cure::use(ICharacter& target)
{
    std::cout << " heals " << target.getName() << "'s wounds *\n";
}

