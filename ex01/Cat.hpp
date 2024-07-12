/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:30:41 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/12 18:40:09 by chuleung         ###   ########.fr       */
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
        void setIdea(const int index, const std::string& idea);
        std::string getIdea(const int index) const;

    protected:
        
    private:
        Brain* cat_brain_;

};
