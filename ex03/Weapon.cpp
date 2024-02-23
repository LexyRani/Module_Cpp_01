/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:00:03 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/23 19:26:03 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    
}

Weapon::Weapon(std::string type) : _type(type)
{

}

Weapon::~Weapon(void)
{
    
}

// std::string  Weapon::getType(void)
std::string const &Weapon::getType(void) const
{
   return(this->_type); 
}

void Weapon::setType(std::string type)
{
     this->_type = type;
}

