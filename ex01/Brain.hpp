/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:23 by chuleung          #+#    #+#             */
/*   Updated: 2024/07/12 17:35:53 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#pragma once

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        void setIdea(const int index, const std::string& idea);
        std::string ideas_[100];

    protected:

    private:

};