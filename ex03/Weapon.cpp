/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:00:03 by aceralin          #+#    #+#             */
/*   Updated: 2024/01/24 20:20:59 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    
}

Weapon::Weapon(std::string& type)
{
    
}

Weapon::~Weapon(void)
{
    
}

const std::string  Weapon::getType(void) const
{
   return(this->_type); 
}

void Weapon::setType(const std::string type)
{
    type = this->_type;
}