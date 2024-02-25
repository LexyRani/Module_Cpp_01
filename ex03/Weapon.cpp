/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:00:03 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/24 17:23:45 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Default constructor has been called." << std::endl;
}

Weapon::Weapon(std::string type) : _type(type)
{ 
   std::cout << "Surcharge constructor has been called." << std::endl;
}

Weapon::~Weapon(void)
{
    
}

std::string const &Weapon::getType(void) const
{
   return(_type); 
}

void Weapon::setType(std::string type)
{
     _type = type;
}

