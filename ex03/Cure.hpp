/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 23:14:11 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/13 00:58:26 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(); //constructor
        ~Cure(); //destructor
        Cure(const Cure& other); // copy constructor
        Cure& operator=(const Ice& other); //copy assignment operator
        Cure* clone() const;
    
    protected:

    private:

};