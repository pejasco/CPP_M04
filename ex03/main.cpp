/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 22:35:58 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/15 17:58:59 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include <iostream>
#include <string>


int main()
{
    std::cout << "########################";
    IMateriaSource* src = new MateriaSource();
    std::cout << "------------\n";
    src->learnMateria(new Ice());
    std::cout << "------------\n";
    src->learnMateria(new Cure());
    std::cout << "------------\n";
    ICharacter* me = new Character("me");
    std::cout << "------------\n";
    AMateria* tmp;
    std::cout << "------------\n";
    tmp = src->createMateria("ice");
    std::cout << "------------\n";
    me->equip(tmp);
    std::cout << "------------\n";
    tmp = src->createMateria("cure");
    std::cout << "------------\n";
    me->equip(tmp);
    std::cout << "------------\n";
    ICharacter* bob = new Character("bob");
    std::cout << "------------\n";
    me->use(0, *bob);
    std::cout << "------------\n";
    me->use(1, *bob);
    std::cout << "------------\n";
    delete bob;
    std::cout << "------------\n";
    delete me;
    std::cout << "------------\n";
    delete src;
    std::cout << "------------\n";

    std::cout << "########################\n";

    Cure *cure = new Cure();
    std::cout << "------------\n";
    Ice *ice = new Ice();
    std::cout << "------------\n";
    Character simon("Asian Boss");
    std::cout << "------------\n";
    Character kalam("Kung Fu Panda");
    std::cout << "------------\n";
    simon.equip(ice);
    std::cout << "------------\n";
    simon.equip(cure);
    std::cout << "------------\n";
    simon.use(0, kalam);
    std::cout << "------------\n";
    simon.use(1, kalam);
    std::cout << "------------\n";

    Ice*  del_ice  = ice;  // to avoid memory leak as the destructor of character doesnt del unequip items
    Cure* del_cure = cure; // to avoid memory leak as the destructor of character doesnt del unequip items
    for (int i = 0 ; i < 4; i++)
        simon.unequip(i);
    std::cout << "------------\n";  
    std::cout << simon.getName() << ".\n";
    std::cout << "------------\n";
    delete del_ice;
    std::cout << "------------\n";
    delete del_cure;
    std::cout << "------------\n";
    std::cout << "########################\n";
    return 0;
}
