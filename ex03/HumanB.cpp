/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:05:02 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/28 20:36:08 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
    
}

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
      std::cout <<BOLD<<DMAGENTA<<"Surcharge Human B constructor has been called."<< RESET<< std::endl;
}

HumanB::~HumanB(void)
{
    std::cout <<BOLD<<DMAGENTA<<"Human B destructor has been called."<< RESET<< std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack(void)
{
     std::cout << this->_name << " attack with their " << _weapon->getType() << std::endl;
}