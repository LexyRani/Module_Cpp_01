/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:32:08 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/14 20:18:46 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(void)
{
    
}

Replace::Replace(File& filename, const char *s1, const char *s2): _s1(s1), _s2(s2)
{
    this->_destFileName = filename.getName() + std::string(".replace");
    std::cout<<this->_destFileName<<std::endl;
}

Replace::~Replace()
{
    
}

void    fillBuffer()
{
    
}

void    replaceFile()
{
    
}

void    foundOccurence()
{
    
}