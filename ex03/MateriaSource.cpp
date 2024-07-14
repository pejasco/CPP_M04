/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:19:59 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/14 23:59:34 by chuleung         ###   ########.fr       */
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
    AMateria* clone = 


}

AMateria* MateriaSource::createMateria(std::string const& type)
{




}


void MateriaSource::learnMateria(AMateria* materia)
{
    std::cout << "MateriaSource: learning materia: " << materia->getType()
              <<".\n" ;
    if (!materia)
        return;
    const std::string materia_type = materia->getType();
    for (int i = 0; i < IMateriaSource::materia_max_count_; ++i)
    {
        if (materia_slots_[i])
            continue;
        else
        {
            materia_slots_[i] = materia;
            break;
        }
    }
    std::cout << "MateriaSource: learning materia complete.\n" ;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    std::cout << "MateriaSource: creating materia.\n" ;
    for (int i = 0; i < IMateriaSource::materia_max_count_; ++i)
    {
        if (materia_slots_[i]->getType() == type)
            return materia_slots_[i]->clone();
    }
    std::cout << "MateriaSource: creating materia complete.\n" ;
    return NULL;
}
