/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:47:32 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/23 19:11:38 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//Fonction Membre
void Zombie::announce()
{
    std::cout<< getName() << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

//Constructeur par default
Zombie::Zombie()
{

}

//Constructeur par parametres
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

void    Zombie::setName(std::string name)
{
    this->_name = name;
}

//destructeur
Zombie::~Zombie(void)
{
    std::cout<< getName() <<" : MyClass was destroyed." <<std::endl;
}

