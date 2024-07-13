/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 23:13:52 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/13 19:51:17 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(); //constructor
        ~Ice(); //destructor
        Ice(const Ice& other); // copy constructor
        Ice& operator=(const Ice& other); //copy assignment operator
    
        Ice* clone() const;
        void use(ICharacter& target);
    
    protected:

    private:

};