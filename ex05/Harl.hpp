/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:19:25 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/23 18:41:30 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef HARL_HPP
#define HARL_HPP

#include <fstream>
#include <iostream>
#include <sstream>
#include <cstring>

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

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
    
        Harl();
        ~Harl();
        void complain(std::string level);

};

#endif