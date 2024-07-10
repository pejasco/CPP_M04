/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:16 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/10 19:04:12 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog() : Animal("Dog")
{
    std::cout << "[Dog] constructor has been called.\n";
}

Dog::~Dog()
{
    std::cout << "[Dog] destructor has been called.\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "[Dog] copy constructor has been called.\n";
}

Dog& Dog::operator=(const Dog& other)
{
    if (this == &other)
        return *this;
    type_ = other.type_; 
    std::cout << "[Animal] copy assignment operator for has been called.\n";
    return *this;
}

void Dog::makeSound()
{
    std::cout << "[Dog] WoooooF...WooFFF\n";
}
