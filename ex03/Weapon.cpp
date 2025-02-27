/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:00:03 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/28 20:41:46 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
   std::cout <<BOLD<<BLUE<<"Default Weapon constructor  has been called."<< RESET<< std::endl;
   _type = "unknown weapon";
}

Weapon::Weapon(std::string type) : _type(type)
{ 
   std::cout <<BOLD<<YELLOW<<"Surcharge Weapon constructor has been called." <<RESET<<std::endl;
   if (_type.empty())
     _type = "unknown weapon";
}

Weapon::~Weapon(void)
{
    std::cout <<BOLD<<YELLOW<<"Weapon destructor  has been called."<< RESET<< std::endl;
}

std::string const &Weapon::getType(void) const
{
   return(_type); 
}

void Weapon::setType(std::string type)
{
   _type = type;
}

