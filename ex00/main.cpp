/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:32:46 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/23 19:11:56 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump(std::string name);

int main()
{
    Zombie *zombie = newZombie("Bob");
    zombie->announce();
    randomChump("BMOZ");
    delete zombie;
    return (0);
    
}