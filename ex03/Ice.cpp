/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 01:00:36 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/13 01:02:24 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
    std::cout << "[Ice] constructor has been called.\n";
}

Ice::~Ice()
{
    std::cout << "[Ice] destructor has been called.\n";
}

Cat::Ice(const Ice& other) : AMateria(other)
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