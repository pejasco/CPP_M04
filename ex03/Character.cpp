/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:18:48 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/13 23:37:59 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Character.hpp"

Character::Character(const std::string& name) : name_(name), nbr_of_unequip_(0)
{
    for (int i = 0; i < max_slots; ++i)
        inventory_slots_[i] = NULL;
    std::cout << "[Character] constructor has been called for " << name_ << ".\n";
}

Character::~Character()
{
    for (int i = 0; i < max_slots; ++i)
    {
        if (inventory_slots_[i])
            delete inventory_slots_[i];
    }
    std::cout << "[Character] destructor has been called for " << name_ << ".\n";
}

Character::Character(const Character& other) : Character(other.name_)
{
    nbr_of_unequip_ = other.
    for (int i = 0; i < max_slots; ++i)
    {
         if (other.inventory_slots_[i] == NULL)



    }



    std::cout << "[Character] copy constructor has been called.\n";
}

Character::Character& operator=(const Character& target)
{
    a member with an in-class initializer must be const
    std::cout << "
}