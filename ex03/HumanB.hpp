/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:23:33 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/13 21:06:15 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_H
#define HUMANB_H
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

//COLOR
#define MAGENTA "\033[95m"
#define WHITE "\033[37m"
#define GREY  "\033[90m"
#define RED  "\033[91m"
#define DRED  "\033[31m"
#define GREEN  "\033[92m"
#define DGREEN  "\033[32m"
#define YELLOW  "\033[93m"
#define DYELLOW  "\033[33m"
#define BLUE "\033[94m"
#define DBLUE  "\033[34m"
#define DMAGENTA  "\033[35m"
#define CYAN  "\033[96m"
#define DCYAN  "\033[36m"
#define RESET "\033[0m"

// FORMAT
#define BOLD  "\033[1m"
#define ITALIC  "\033[3m"
#define UNDERLINE  "\033[4m"
#define STRIKETHROUGH  "\033[9m"


class HumanB
{
    private:
        std::string _name;
        Weapon* _weapon;
    
    public:
        HumanB(void);
        HumanB(std::string name);
        ~HumanB(void);
        void attack(void);
        void setWeapon(Weapon& weapon);
};

#endif

