/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:31 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/14 16:05:13 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

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



/*
void AMateria::setType(const std::string& type)
{
    type_(type){};
}
*/
