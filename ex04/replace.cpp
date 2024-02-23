/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:32:08 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/23 18:30:41 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(void)
{
    
}

Replace::Replace(File& file, const char *s1, const char *s2): _s1(s1), _s2(s2)
{
    _filename = file.getName();
    _destFileName = file.getName() + std::string(".replace");
}

Replace::~Replace()
{
    
}

#include <string>
#include <sstream>
#include <fstream>

void    Replace::fillBuffer()
{
    std::ifstream file(_filename.c_str(), std::ifstream::in);

    std::string line;
    while(file.eof() == false)
    {
        std::getline(file, line);
        _bufferFile += line + "\n" ; 
    }
    file.close();
    
}

int    Replace::replaceFile()
{
    std::ofstream newFile;
    newFile.open(_destFileName.c_str(), std::ofstream::out);
    if(!newFile.is_open())
    {
        std::cerr<<"Fail to open the new file"<<std::endl;
        return (1);
    }
    newFile<<_bufferFile;
    newFile.close();
    return(0);
}

void    Replace::foundOccurence()
{
    for(std::size_t found = _bufferFile.find(_s1, 0); found != std::string::npos; found = _bufferFile.find(_s1, found + strlen(_s2.c_str())))
    {
        _bufferFile.erase(found, strlen(_s2.c_str()) -1);
        _bufferFile.insert(found,_s2);
    }
}

