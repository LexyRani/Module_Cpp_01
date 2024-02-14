/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:02:24 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/14 17:24:05 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(void)
{
    
}

File::File(std::string filename) : _filename(filename)
{
    
}

File::~File(void)
{
    
}

std::string File::getName(void)
{
    return(this->_filename);
}