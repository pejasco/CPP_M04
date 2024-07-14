/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 23:08:22 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/14 18:40:18 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class AMateria;

class IMateriaSource
{
    public:
        virtual ~IMateriaSource(){};
        virtual void        learnMateria(AMateria* materia) = 0;
        virtual AMateria*   createMateria(std::string const &type) = 0;
};

class 