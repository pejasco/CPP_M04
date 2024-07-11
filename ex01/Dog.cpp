/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:16 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/11 19:59:08 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog() : Animal("Dog"), dog_brain_(new Brain())
{
    std::cout << "[Dog] constructor has been called.\n";
}

Dog::~Dog()
{
    delete dog_brain_;
    std::cout << "[Dog] destructor has been called.\n";
}

Dog::Dog(const Dog& other) : Animal(other), dog_brain_(new Brain(*other.dog_brain_))
{
    std::cout << "[Dog] copy constructor has been called.\n";
}

Dog& Dog::operator=(const Dog& other)
{
    if (this == &other)
        return *this;
    
    type_ = other.type_;
    delete dog_brain_;
    dog_brain_ = new Brain(*other.dog_brain_);
    std::cout << "[Dog] copy assignment operator for has been called.\n";
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "[Dog] WoooooF...WooFFF\n";
}


void Dog::setIdea()

/*

class Dog : public Animal {
public:
    Dog() : Animal(), brain(new Brain()) {}
    ~Dog() { delete brain; }

    // Copy constructor
    Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
        std::cout << "[Dog] copy constructor has been called.\n";
    }

    // Copy assignment operator
    Dog& operator=(const Dog& other) {
        if (this != &other) {
            Animal::operator=(other); // Call base class assignment operator
            delete brain;
            brain = new Brain(*other.brain);
        }
        return *this;
    }

private:
    Brain* brain;
};
*/
