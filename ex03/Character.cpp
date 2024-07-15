/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:18:48 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/15 17:19:25 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character(const std::string& name) : name_(name)
{
    for (int i = 0; i < max_slots_; ++i)
        inventory_slots_[i] = NULL;
    std::cout << "[Character] constructor has been called for " << name_ << ".\n";
}

Character::~Character()
{
    for (int i = 0; i < max_slots_; ++i)
    {
        if (inventory_slots_[i])
            delete inventory_slots_[i]; //Be careful! We have to store the unequip items in the main 
        inventory_slots_[i] = NULL;     //to avoid memory leak.
    }
    std::cout << "[Character] destructor has been called for " << name_ << ".\n";
}

Character::Character(const Character& other)
{
    name_ = other.name_;

    for (int i = 0; i < max_slots_; ++i)
    {
        if (other.inventory_slots_[i] == NULL)
            inventory_slots_[i] = NULL;
        else
            inventory_slots_[i] = other.inventory_slots_[i]->clone();
    }
    std::cout << "[Character] copy constructor has been called for " << name_ << ".\n";
}

Character& Character::operator=(const Character& other)
{
    if (this == &other)
        return *this;
    this->name_ = other.name_;
    for (int i = 0; i < max_slots_; ++i)
    {
        if (inventory_slots_[i])
            delete inventory_slots_[i];
        if (other.inventory_slots_[i] == NULL)
            inventory_slots_[i] = NULL;
        else
            inventory_slots_[i] = other.inventory_slots_[i]->clone();
    }
    std::cout << "[Character] copy assignment operator has been called for " << name_ << ".\n";
    return *this;
}

std::string const& Character::getName() const
{
    return name_;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < max_slots_; i++)
    {
        if (inventory_slots_[i] == m) // check if materia is already equipped
            return;
        if (inventory_slots_[i] == NULL) //check if any slot is available
        {
            inventory_slots_[i] = m;
            std::cout << "[Character] " << name_ << " has been equipped with " 
                      << inventory_slots_[i]->getType()
                      << " .\n";
            return;
        }
    }
    std::cout << "The inventory slot is full. No equipment can be equipped.\n";
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= Character::max_slots_ || inventory_slots_[idx] == NULL)
        return;
    std::string type = inventory_slots_[idx]->getType();
    inventory_slots_[idx] = NULL;
    std::cout << "[Character] " << name_ << " has been unequipped " << type << " .\n";
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= Character::max_slots_ || inventory_slots_[idx] == NULL)
        return;
    std::cout << "* " << name_ ;
    inventory_slots_[idx]->use(target);
}
