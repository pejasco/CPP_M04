/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:30:41 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/11 12:44:28 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#pragma once

class Cat : public Animal
{
    public:
        Cat(); //constructor
        ~Cat(); //destructor
        Cat(const Cat& other); //copy constructor
        Cat& operator=(const Cat& other); //copy assignment operator

    protected:
        
    private:
        void makeSound() const;
        Brain* cat_brain_;

};
