/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:32:32 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/28 20:22:54 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout <<BOLD <<BLUE<< "Default constructor has been called." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout<<BOLD<<GREEN<<getName() <<" : MyClass was destroyed" <<std::endl;
}

void Zombie::announce()
{
    std::cout<<BOLD<<YELLOW<< getName() <<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

std::string Zombie::getName(void)
{  
    return(this->_name);
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}
