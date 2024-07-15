/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scofield <Scofield@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:19:59 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/15 02:53:27 by Scofield         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < max_slots_; ++i)
        materia_slots_[i] = NULL;
    std::cout <<  "[MateriaSource] constructor has been called.\n";
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < max_slots_; ++i)
    {
        if (materia_slots_[i])
            delete materia_slots_[i];
        materia_slots_[i] = NULL;
    }
    std::cout << "[MateriaSource] destructor has been called.\n";
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < max_slots_; ++i)
    {
        if (other.materia_slots_[i] == NULL)
            materia_slots_[i] = NULL;
        else
            materia_slots_[i] = other.materia_slots_[i]->clone(); //deep_copy
    }
    std::cout << "[MateriaSource] copy constructor has been called.\n";   
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this == &other)
        return *this;
    for (int i = 0; i < max_slots_; ++i)
    {
        if (materia_slots_[i])
            delete materia_slots_[i];
        if (other.materia_slots_[i] == NULL)
            materia_slots_[i] = NULL;
        else
            materia_slots_[i] = other.materia_slots_[i]->clone();
    }
    std::cout << "[MateriaSource] copy assignment operator has been called.\n";
    return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if (materia == NULL)
        return;
    for (int i = 0; i < max_slots_; ++i)
    {
        if (materia_slots_[i] == NULL)
        {
            materia_slots_[i] = materia->clone();
            break;
        }
    }
    std::cout << "[MateriaSource] learning materia <"
                << materia->getType() << "> complete.\n" ;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < MateriaSource::max_slots_; ++i)
    {
        if (materia_slots_[i]->getType() == type)
        {
            std::cout << "[MateriaSource] creating materia <"
                << type << "> complete.\n" ;
            return materia_slots_[i]->clone();
        }
    }
    std::cout << "[MateriaSource] creation failed. no materia <"
                << type << "> found.\n" ;
    return 0;
}
