/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:01:27 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/28 17:25:02 by aceralin         ###   ########.fr       */
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
    ptrFtHarl ptrFtHarl[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (size_t i = 0; i < 4; i += 1)
    {
		if (level == levels[i])
        {
            switch(i)
            {
                case 0:
                    (this->*ptrFtHarl[0])();
                    (this->*ptrFtHarl[1])();
                    (this->*ptrFtHarl[2])();
                    (this->*ptrFtHarl[3])();
                    break;
                case 1:
                    (this->*ptrFtHarl[1])();
                    (this->*ptrFtHarl[2])();
                    (this->*ptrFtHarl[3])();
                    break;
                case 2:
                    (this->*ptrFtHarl[2])();
                    (this->*ptrFtHarl[3])();
                    break;
                case 3:
                    (this->*ptrFtHarl[3])();
                    break;
                default:
                    break;
            }
            return;
        }
    }
    std::cout<<YELLOW<<"[ Probably complaining about insignificant problems ]"<<std::endl; 		  
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