/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:19:59 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/14 19:39:41 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < max_slots_; ++i)
        materia_slots_[i] = NULL;
    std::cout <<  "[MateriaSource] constructor has been called.\n";
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < max_slots_; ++i)
        delete materia_slots_[i];
    std::cout << "[Materia] destructor has been called.\n";
}















AMateria::AMateria(std::string const& type) : type_(type)
{
    std::cout << "[Materia] constructor has been called.\n";
}

AMateria::~AMateria()
{
    std::cout << "[Materia] destructor has been called.\n";
}

AMateria::AMateria(const AMateria&other) : type_(other.type_)
{
    std::cout << "[Materia] copy constructor for [" << type_ << "] has been called.\n";   
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this == &other)
        return *this;
    type_ = other.type_;
    std::cout << "[Materia] copy assignment operator for [" << type_ << "] has been called.\n";
    return *this;
}

std::string const& AMateria::getType() const
{
    return "The type is " + type_ + "!";
}

void AMateria::use(ICharacter& target)
{
    std::cout << " used a unknown materia at " << target.getName() << " *\n";
}