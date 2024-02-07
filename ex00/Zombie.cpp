/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:47:32 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/07 20:27:54 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//Fonction Membre
void Zombie::announce()
{
    std::cout<< this->_name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

//Constructeur par default
Zombie::Zombie()
{
    
}

//Constructeur par parametres
Zombie::Zombie(std::string name): _name(name)
{
    
}

//destructeur
Zombie::~Zombie(void)
{
    std::cout<<this->_name <<" : MyClass was destroyed"<<std::endl;
}

