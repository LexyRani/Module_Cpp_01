/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:39:00 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/24 16:43:44 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cout<<"Insufficient number of zombies "<<std::endl;   
        return(NULL);
    }
    Zombie *zombies = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        zombies[i].setName(name);
        zombies[i].announce();
    }
    return zombies;
}