/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:10 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/10 22:08:43 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#pragma once

class Animal
{
    public:
        Animal(); //constructor
        Animal(const std::string &type); //constructor with parameter
        ~Animal(); //destructor
        Animal(const Animal&other); //copy constructor
        Animal& operator=(const Animal&other); //copy assignment operator
        void virtual makeSound() const;
        std::string getType() const;

    
    protected:
        std::string type_;

    private:

};