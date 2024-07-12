/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:35:48 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/12 21:27:43 by chuleung         ###   ########.fr       */
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
    basic.setIdea(2, "I am a dog!!!!");
    std::cout << "Dog basic's idea: " << basic.getIdea(2) << "\n";
    std::cout << "-----" << "\n";
    Dog tmp = basic;
    tmp.setIdea(2, "I am a stupid dog!!!!");
    std::cout << "Dog tmp's idea: " << tmp.getIdea(2) << "\n";
    std::cout << "Dog basic's idea: " << basic.getIdea(2) << "\n";
    std::cout << "-----" << "\n";

    //array of Animal objects
    std::cout << "######################" << "\n";
    int nbr_of_animals = 6;
    Animal* all_animals[nbr_of_animals];

    for (int i = 0; i < nbr_of_animals; i++)
    {
        std::cout << "#" << i << " "; 
        if (i < (nbr_of_animals / 2))
            all_animals[i] = new Dog();
        else if (i >= (nbr_of_animals / 2) && i < nbr_of_animals)
            all_animals[i] = new Cat();
    }
    std::cout << "All animal in the loop created." << "\n";
    std::cout << "######################" << "\n";
    for (int i = 0; i < nbr_of_animals; i++)
    {
        std::cout << "#" << i << " " << all_animals[i]->getType() << " It is making sound:";  
        if (all_animals[i]->getType() == "The type is Dog!")
            std::cout << "\U0001F436";
        else if (all_animals[i]->getType() == "The type is Cat!")
            std::cout << "\U0001F431";
        all_animals[i]->makeSound();
        std::cout << "-------------------------------" << "\n";
    }
    std::cout << "All animal in the loop made sound." << "\n";
    std::cout << "######################" << "\n";
    for (int i = 0; i < nbr_of_animals; i++)
    {
        std::cout << "#" << i << " "; 
        delete all_animals[i];
        all_animals[i] = NULL;
    }
    std::cout << "All animal in the loop been deleted." << "\n";
    std::cout << "######################" << "\n";
    return 0;
}
