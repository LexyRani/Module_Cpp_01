/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:39:00 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/27 18:20:46 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cout<<BOLD<<RED<<"Insufficient number of zombies "<<RESET<<std::endl;   
        return(NULL);
    }
    if (name.empty())
    {
        std::cout << BOLD<<RED<<"Zombie has no name" << std::endl;
        name = "unknown";
    }
    Zombie *zombies = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        zombies[i].setName(name);
        zombies[i].announce();
    }
    return zombies;
}