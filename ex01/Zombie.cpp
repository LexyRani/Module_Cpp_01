/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:32:32 by aceralin          #+#    #+#             */
/*   Updated: 2024/01/23 19:31:29 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//alloue n objets zombie en une seule allocation
//initialise les zombies en dannant a chacun le nom passe en parametre
//retourne un pointeur sur le premier zombie

Zombie::Zombie(void)
{
    return;
}

void Zombie::announce()
{
    std::cout<< this->_name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

//Constructeur par default

//Constructeur
Zombie::Zombie(std::string name): _name(name)
{
    
}
//destructeur
Zombie::~Zombie(void)
{
    std::cout<<this->_name <<" : MyClass was destroyed"<<std::endl;
}

std::string Zombie::getName(void)
{
    
    return(this->_name);
}

void Zombie::setName(std::string name)
{
    std::cout << name<<std::endl;
}
