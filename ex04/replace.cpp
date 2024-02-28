/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:32:08 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/28 19:16:48 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <string>
#include <sstream>
#include <fstream>

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

int    Replace::fillBuffer()
{
    std::string line;
    std::ifstream file(_filename.c_str(), std::ifstream::in);
    if (!file.is_open())
    {
         std::cerr<<BOLD<<RED<< _filename << ": Fail to open the file" <<RESET<<std::endl;
         return (1);
    }
    while (file.eof() == false)
    {
        std::getline(file, line);
        if (file.eof() == true)
        {
            _bufferFile +=line;
           // break;
        }
        else
            _bufferFile += line + "\n";
    }
    //std::cout<<_bufferFile<<std::endl;
    file.close();
    return (0);
}

void    Replace::foundOccurence()
{
    for(std::size_t found = _bufferFile.find(_s1, 0); found != std::string::npos; found = _bufferFile.find(_s1, found + strlen(_s2.c_str())))
    {
        _bufferFile.erase(found, strlen(_s1.c_str()));
        _bufferFile.insert(found, _s2);
    }
}

int    Replace::replaceFile()
{
    if (fillBuffer() == 1)
        return (1);
    foundOccurence();
    std::ofstream newFile(_destFileName.c_str(), std::ofstream::out);
    if (!newFile.is_open())
    {
        std::cerr<<BOLD<<RED<<_destFileName<<" : Fail to open the file.replace"<<RESET<<std::endl;
        return (1);
    }
    newFile<<_bufferFile;
    newFile.close();
    return (0);
}


///verifier pourquoi il y a une newline qui apparait dans le nouveau fichier