/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scofield <Scofield@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:30:41 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/12 01:09:01 by Scofield         ###   ########.fr       */
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
        void makeSound() const;
        void setIdea(int index, const std::string);
        void getIdea(int index);
        
    protected:
        
    private:
        Brain* cat_brain_;

};
