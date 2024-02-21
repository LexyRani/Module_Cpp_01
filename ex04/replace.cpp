/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:32:08 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/21 22:08:52 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(void)
{
    
}

Replace::Replace(File& file, const char *s1, const char *s2): _s1(s1), _s2(s2)
{
    _filename = file.getName();
    std::cout<<"filename: "<< _filename<<std::endl;
    _destFileName = file.getName() + std::string(".replace");
    std::cout<<"dest: " <<this->_destFileName<<std::endl;
}

Replace::~Replace()
{
    
}

#include <string>
#include <sstream>

void    Replace::fillBuffer()
{
    std::ifstream file(_filename.c_str(), std::ifstream::in);

    std::string line;
    while(file.eof() == false)
    {
        std::getline(file, line);
        std::cout<< line <<std::endl;
        std::cout<< std::endl;
        _bufferFile += line + "\n" ; 
    }
   // std::cout<< "bufferfile: "<<_bufferFile<<std::endl;
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
    return(0);
}

void    Replace::foundOccurence()
{
    for()
}