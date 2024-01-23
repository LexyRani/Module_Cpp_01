/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:21:31 by aceralin          #+#    #+#             */
/*   Updated: 2024/01/23 17:12:49 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// cree un Zombie et lui donne un nom en le stockant sur la stack et le fait se presenter

void randomChump( std::string name )
{
    Zombie  zombie_new(name);
    zombie_new.announce();
}