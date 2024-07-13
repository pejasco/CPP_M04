/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:31 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/13 16:20:05 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : type_(type)
{
    std::cout << "[AMateria] constructor has been called.\n";
}

AMateria::~AMateria()
{
    std::cout << "[Animal] destructor has been called.\n";
}

AMateria::AMateria(const AMateria&other) : type_(other.type_)
{
    std::cout << "[AMateria] copy constructor for [" << type_ << "] has been called.\n";   
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this == &other)
        return *this;
    type_ = other.type_;
    std::cout << "[AMateria] copy assignment operator for [" << type_ << "] has been called.\n";
    return *this;
}

const std::string& AMateria::getType() const
{
    return "The type is " + type_ + "!";
}

/*
void AMateria::setType(const std::string& type)
{
    type_(type){};
}
*/
