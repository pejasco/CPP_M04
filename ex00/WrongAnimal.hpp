/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:10 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/11 16:51:55 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#pragma once

class WrongAnimal
{
    public:
        WrongAnimal(); //constructor
        WrongAnimal(const std::string &type); //constructor with parameter
        ~WrongAnimal(); //destructor
        WrongAnimal(const WrongAnimal&other); //copy constructor
        WrongAnimal& operator=(const WrongAnimal&other); //copy assignment operator
        void makeSound() const;
        std::string getType() const;

    protected:
        std::string type_;

    private:

};