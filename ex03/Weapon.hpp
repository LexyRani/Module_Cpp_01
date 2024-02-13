/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:13:39 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/13 21:06:44 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
// #include "HumanA.hpp"
// #include "HumanB.hpp"


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


class Weapon
{
    private:
         std::string  _type;    
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon(void);
        const std::string getType(void)const;
        void setType(std::string type);
};

#endif