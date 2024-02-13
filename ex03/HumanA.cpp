/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:25:53 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/13 20:54:57 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    
}

HumanA::~HumanA()
{
    
}


void HumanA::attack(void)const
{
    std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}