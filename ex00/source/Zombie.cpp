/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:47:32 by aceralin          #+#    #+#             */
/*   Updated: 2024/01/18 17:02:30 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout<< this->_name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{

}

Zombie::~Zombie(void)
{
    //delete(Zombie);
    return;
}

