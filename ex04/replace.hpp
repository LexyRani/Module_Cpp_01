/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:32:05 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/14 20:17:01 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <fstream>
#include <iostream>
#include "File.hpp"

class Replace
{
    private:
        std::string _s1;
        std::string _s2;
        std::string _bufferFile;
        std::string _destFileName;
        //std::string _srcFileName;
        
    public:
        Replace();
        Replace(File& filename, const char *s1, const char *s2);
        ~Replace();
        void    fillBuffer(void); //gerer les cas d erreurs
        void    replaceFile(void);
        void    foundOccurence(void);
  
  
};

#endif