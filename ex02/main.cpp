/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:35:48 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/12 22:29:23 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    
    std::cout << "######################" << "\n";
    //const Animal* a = new Animal(); //you cannot initialse Animal
    const Animal* j = new Dog();
    std::cout << "-----" << "\n";
    const Animal* i = new Cat();
    std::cout << "-----" << "\n";
    std::cout << "######################" << "\n";
    j->makeSound();
    i->makeSound();
    std::cout << "######################" << "\n";
    delete j;
    std::cout << "-----" << "\n";
    delete i;
    std::cout << "-----" << "\n";

}
