/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:32:32 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/23 19:20:31 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout<< getName() <<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(void)
{
    std::cout << "Default constructor has been called." << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{
    if (name.empty())
    {
        std::cout << "Zombie has no name" << std::endl;
        _name = "unknown";
    }
}

std::string Zombie::getName(void)
{  
    return(this->_name);
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie(void)
{
    std::cout<<getName() <<" : MyClass was destroyed" <<std::endl;
}