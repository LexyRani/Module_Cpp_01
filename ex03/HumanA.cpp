/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:25:53 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/27 19:11:57 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout <<BOLD<<GREEN<<"Surcharge HumanA constructor has been called."<< RESET<< std::endl;
}

HumanA::~HumanA()
{
    std::cout <<BOLD<<GREEN<<"HumanA destructor has been called."<< RESET<< std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}