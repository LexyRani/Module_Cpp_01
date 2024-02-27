/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:01:31 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/27 16:50:13 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl    harl;
        harl.complain(argv[1]);
        return (0);
    }
    else
    {
        std::cerr<<"Error: Can you please add a argument"<<std::endl;
        std::cerr<<"./HalFilter [arg]"<<std::endl;  
    }
    return (1);
}