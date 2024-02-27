/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:47:32 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/27 17:39:40 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie(void)
{
    std::cout<<BOLD<<GREEN<< getName() <<" : MyClass was destroyed." <<RESET<<std::endl;
}

void Zombie::announce()
{
    std::cout<<BOLD<<YELLOW<< getName() << ": BraiiiiiiinnnzzzZ..." <<RESET<<std::endl;
}


Zombie::Zombie(std::string name): _name(name)
{
    if (name.empty())
    {
        std::cout <<BOLD <<RED<< "Zombie has no name" <<RESET<< std::endl;
        _name = "unknown";
    }
}

std::string Zombie::getName(void)
{
    return (_name);
}

void    Zombie::setName(std::string name)
{
    _name = name;
}