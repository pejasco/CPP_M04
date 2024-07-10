/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:07 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/10 19:02:39 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal()
{
    std::cout << "[WrongAnimal] constructor has been called.\n";
}

WrongAnimal::WrongAnimal(const std::string &type) : type_(type)
{   
    std::cout << "[WrongAnimal] constructor for [" << type_ << "] has been called.\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[WrongAnimal] destructor has been called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal&other) : type_(other.type_)
{
    std::cout << "[WrongAnimal] copy constructor for [" << type_ << "] has been called.\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this == &other)
        return *this;
    type_ = other.type_; 
    std::cout << "[Animal] copy assignment operator for [" << type_ << "] has been called.\n";
    return *this;
}

void WrongAnimal::makeSound()
{
    std::cout << "[Animal] Huhhh....Who am I?!?!!?!?!?\n";
}
