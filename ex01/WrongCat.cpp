/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:13 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/11 17:07:06 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <string>

WrongCat::WrongCat() : WrongAnimal("Cat"), wrong_cat_brain_(new Brain())
{
    std::cout << "[WrongCat] constructor has been called.\n";
}

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] destructor has been called.\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other), 
            wrong_cat_brain_(new Brain(*other.wrong_cat_brain_))
{
    std::cout << "[WrongCat] copy constructor for has been called.\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this == &other)
        return *this;
    type_ = other.type_;
    delete wrong_cat_brain_;
    wrong_cat_brain_ = new Brain(*other.wrong_cat_brain_);
    std::cout << "[WrongCat] copy assignment operator has been called.\n";
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "[WrongCat] MeoooW...MeoWWW\n";
}
