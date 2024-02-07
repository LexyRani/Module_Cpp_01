/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:18:15 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/07 20:36:58 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// cree un Zombie et lui donne un nom en le stockant sur la heap grace a new
//On fait appelle a un pointeur sur fonction qui initialise l objet 
//en utilisant new pour l'allouer avec les paramettres correspondants.
Zombie *newZombie(std::string name )
{
    return (new Zombie(name));
}

