/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:13 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/10 19:02:53 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <string>

WrongCat::WrongCat() : WrongAnimal("Cat")
{
    std::cout << "[WrongCat] constructor has been called.\n";
}

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] destructor has been called.\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "[WrongCat] copy constructor for has been called.\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this == &other)
        return *this;
    type_ = other.type_; 
    std::cout << "[WrongCat] copy assignment operator has been called.\n";
    return *this;
}

void WrongCat::makeSound()
{
    std::cout << "[WrongCat] MeoooW...MeoWWW\n";
}
