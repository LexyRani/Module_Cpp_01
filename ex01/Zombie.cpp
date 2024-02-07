/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:32:32 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/07 20:55:27 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Fonction Membre
void Zombie::announce()
{
    std::cout<< this->_name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

//Constructeur par default
Zombie::Zombie(void)
{

}

//Constructeur par parametre
Zombie::Zombie(std::string name): _name(name)
{
    
}

//getter
std::string Zombie::getName(void)
{  
    return(this->_name);
}

//setter
void Zombie::setName(std::string name)
{
    this->_name = name;
}

//Destructeur
Zombie::~Zombie(void)
{
    std::cout<<this->_name <<" : MyClass was destroyed" <<std::endl;
}