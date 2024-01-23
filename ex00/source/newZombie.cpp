/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:18:15 by aceralin          #+#    #+#             */
/*   Updated: 2024/01/23 17:13:33 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// cree un Zombie et lui donne un nom en le stockant sur la heap grace a new
Zombie *newZombie(std::string name )
{
    return(new Zombie(name));
}

