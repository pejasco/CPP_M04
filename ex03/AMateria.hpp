/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:35 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/15 14:03:10 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    public:
        AMateria(const std::string& type);
        virtual ~AMateria();
        AMateria(const AMateria& other);
        AMateria& operator=(const AMateria& other);
    
        std::string const& getType() const; //Returns the materia type
        //void                setType(const std::string& type);
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);

    protected:
        std::string type_;

    private:

};
