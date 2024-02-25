/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:30:53 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/24 17:03:25 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
    Zombie *zombies = zombieHorde(7, "Blop");
    delete []zombies;
    return(0);
}
//cas d erreur si N<=0 ou si N est empty, return NULL.