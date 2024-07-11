/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:30:41 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/11 17:03:44 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#pragma once

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(); //constructor
        ~WrongCat(); //destructor
        WrongCat(const WrongCat& other); //copy constructor
        WrongCat& operator=(const WrongCat&other); //copy assignment operator

    protected:
        
    private:
        void makeSound() const;
        Brain* wrong_cat_brain_;

};
