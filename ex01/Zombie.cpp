/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:32:32 by aceralin          #+#    #+#             */
/*   Updated: 2024/01/24 18:02:40 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout<< this->_name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

//Constructeur par default

Zombie::Zombie(void)
{
    return;
}

//Constructeur

Zombie::Zombie(std::string name): _name(name)
{
    
}

//destructeur
Zombie::~Zombie(void)
{
    std::cout<<this->_name <<" : MyClass was destroyed" <<std::endl;
}

std::string Zombie::getName(void)
{  
    return(this->_name);
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}
