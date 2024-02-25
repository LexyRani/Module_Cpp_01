/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:01:27 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/25 18:01:28 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Harl.hpp"

Harl::Harl(void)
{
    
}

Harl::~Harl(void)
{
    
}

void Harl::complain(std::string level)
{
    (void)level;
    ptrFtHarl ptrFtHarl[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (size_t i = 0; i < 4; i += 1)
    {
		if (level == levels[i])
        {
			(this->*ptrFtHarl[i])();
            return;
        }
    }
    std::cout<<"The input you entered does not match"<<std::endl;   
}

void Harl::debug(void)
{
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"<<std::endl;
}

void Harl::info(void)
{
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"<<std::endl;
}

void Harl::warning(void)
{
     std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error(void)
{
    std::cout<<"This is unacceptable ! I want to speak to the manager now."<<std::endl;
}