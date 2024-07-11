/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:30:46 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/11 19:36:39 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#pragma once

class Dog : public Animal
{
    public:
        Dog(); //constructor
        ~Dog(); //destructor
        Dog(const Dog& other); //copy constructor
        Dog& operator=(const Dog&other); //copy assignment operator
        void makeSound() const;

    protected:
        
    private:
        Brain* dog_brain_;

};
