/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 23:14:11 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/13 19:51:01 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(); //constructor
        ~Cure(); //destructor
        Cure(const Cure& other); // copy constructor
        Cure& operator=(const Cure& other); //copy assignment operator
    
        Cure* clone() const;
        void use(ICharacter& target);
    
    protected:

    private:

};