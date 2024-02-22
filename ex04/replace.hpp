/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:32:05 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/21 22:01:05 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <fstream>
#include <iostream>
#include <sstream>
#include <cstring>
#include "File.hpp"

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

class Replace
{
    private:
        std::string _s1;
        std::string _s2;
        std::string _bufferFile;
        std::string _destFileName;
        std::string _filename;
        

    public:
        Replace();
        Replace(File& file, const char *s1, const char *s2);
        ~Replace();
        void    fillBuffer(); //gerer les cas d erreurs
        int    replaceFile();
        void    foundOccurence(void);
  
  
};

#endif