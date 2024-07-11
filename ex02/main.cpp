/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:35:48 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/11 18:02:58 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "######################" << "\n";
    const Animal* j = new Dog();
    std::cout << "-----" << "\n";
    const Animal* i = new Cat();
    std::cout << "-----" << "\n";

    delete j;
    std::cout << "-----" << "\n";
    delete i;
    std::cout << "-----" << "\n";

    //wrong class
    /*
    std::cout << "######################" << "\n";
    const WrongAnimal* a = new WrongCat();
    std::cout << "-----" << "\n";
    const WrongCat* b = new WrongCat();

    delete b;
    std::cout << "-----" << "\n";
    delete a;
    std::cout << "-----" << "\n";
    */

    //concrete brain
    std::cout << "######################" << "\n";
    Dog basic;
    std::cout << "-----" << "\n";
    Dog tmp = basic;
    std::cout << "-----" << "\n";
    return 0;
}
