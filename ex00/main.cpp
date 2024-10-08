/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:35:48 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/11 18:07:49 by chuleung         ###   ########.fr       */
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
    const Animal* meta = new Animal();
    std::cout << "-----" << "\n";
    const Animal* j = new Dog();
    std::cout << "-----" << "\n";
    const Animal* i = new Cat();
    std::cout << "-----" << "\n";

    std::cout << "######################" << "\n";
    std::cout << j->getType() << " " << std::endl;
    std::cout << "-----" << "\n";
    std::cout << i->getType() << " " << std::endl;
    std::cout << "-----" << "\n";
    i->makeSound(); //will output the cat sound!
    std::cout << "-----" << "\n";
    j->makeSound(); //will output the dog sound!
    std::cout << "-----" << "\n";
    meta->makeSound(); //will output the animal sound!
    std::cout << "-----" << "\n";
    delete j; //del dog
    std::cout << "-----" << "\n";
    delete i; //del cat
    std::cout << "-----" << "\n";
    delete meta; //del animal
    std::cout << "-----" << "\n";

    //wrong class
    std::cout << "######################" << "\n";
    const WrongAnimal* a = new WrongAnimal();
    std::cout << "-----" << "\n";
    const WrongAnimal* b = new WrongCat();
    std::cout << "-----" << "\n";
    const WrongCat* c = new WrongCat();
    std::cout << "-----" << "\n";

    std::cout << "######################" << "\n";
    b->makeSound();//will out the animal sound instead of cat sound as virtual func not used!
    std::cout << "-----" << "\n";
    a->makeSound();//will output the animal sound!
    std::cout << "-----" << "\n";
    c->makeSound();

    std::cout << "######################" << "\n";
    delete c; //del animal-cat
    std::cout << "-----" << "\n";
    delete a; //del animal
    std::cout << "-----" << "\n";
    delete b; //del cat
    std::cout << "-----" << "\n";

    return 0;
}