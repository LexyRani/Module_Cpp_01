/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:18:15 by aceralin          #+#    #+#             */
/*   Updated: 2024/01/18 16:36:35 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name )
{
   //(void)name;
    //cree un zombie, lui donne un nom puis le retourne pour qu'il puisse etre utilise en dehors de la fonction
    return(new Zombie(name));
}

