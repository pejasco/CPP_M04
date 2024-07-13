/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:08:29 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/13 17:50:34 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
    public:
        Character(const std::string& name);
        ~Character();
        Character(const ICharacter& other);
        Character& operator=(const ICharacter& target);
        
        std::string const& getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

    protected:
    
    private:
        std::string name_;
        AMateria* inventory_slots[4];
        
};