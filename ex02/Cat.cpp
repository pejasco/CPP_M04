/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:13 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/11 16:20:01 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include <string>

Cat::Cat() : Animal("Cat"), cat_brain_(new Brain())
{
    std::cout << "[Cat] constructor has been called.\n";
}

Cat::~Cat()
{
    delete cat_brain_;
    std::cout << "[Cat] destructor has been called.\n";
}

Cat::Cat(const Cat& other) : Animal(other), cat_brain_(new Brain(*other.cat_brain_))
{
    std::cout << "[Cat] copy constructor has been called.\n";
}

Cat& Cat::operator=(const Cat& other)
{
    if (this == &other)
        return *this;
    type_ = other.type_;
    delete cat_brain_;
    cat_brain_ = new Brain(*other.cat_brain_); 
    std::cout << "[Cat] copy assignment operator has been called.\n";
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "[Cat] MeoooW...MeoWWW\n";
}
