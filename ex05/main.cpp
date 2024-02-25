/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:34:02 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/25 17:53:03 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    harl;
    std::string input;    
    do
    {
        std::cout <<BOLD << GREEN <<"Please enter a level: "<< RESET;
        std::cin >>input;
        harl.complain(input);
    } while (input.compare("exit"));
    return(0);
}