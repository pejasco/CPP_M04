/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:07 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/12 22:01:56 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal()
{
    std::cout << "[Animal] constructor has been called.\n";
}

Animal::Animal(const std::string &type) : type_(type)
{   
    std::cout << "[Animal] constructor for [" << type_ << "] has been called.\n";
}

Animal::~Animal()
{
    std::cout << "[Animal] destructor has been called.\n";
}

Animal::Animal(const Animal& other) : type_(other.type_)
{
    std::cout << "[Animal] copy constructor for [" << type_ << "] has been called.\n";
}

Animal& Animal::operator=(const Animal& other)
{
    if (this == &other)
        return *this;
    type_ = other.type_; 
    std::cout << "[Animal] copy assignment operator for [" << type_ << "] has been called.\n";
    return *this;
}

std::string Animal::getType() const
{
    return "The type is " + type_ + "!";
}
