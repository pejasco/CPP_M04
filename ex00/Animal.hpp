/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siev <siev@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:10 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/09 20:59:14 by siev             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#pragma once

class Animal
{
    public:
        Animal(); //constructor
        Animal(std::string type);
        ~Animal(); //destructor
        Animal(const Animal&other); //copy constructor
        Animal& operator-(const Animal&other); //copy assignment operator

    
    protected:
        std::string type_;

    private:

};