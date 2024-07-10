/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:30:46 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/10 18:24:51 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#pragma once

class Dog : public Animal
{
    public:
        Dog(); //constructor
        ~Dog(); //destructor
        Dog(const Dog& other); //copy constructor
        Dog& operator=(const Dog&other); //copy assignment operator

    protected:
        
    private:
        void makeSound();

};
