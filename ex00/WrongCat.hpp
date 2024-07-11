/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:30:41 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/10 23:28:30 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#pragma once

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(); //constructor
        ~WrongCat(); //destructor
        WrongCat(const WrongCat& other); //copy constructor
        WrongCat& operator=(const WrongCat&other); //copy assignment operator
        void makeSound() const;
    protected:
        
    private:

};
