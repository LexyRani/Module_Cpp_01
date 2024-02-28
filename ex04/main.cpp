/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:50:20 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/28 20:16:06 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "replace.hpp"
#include "File.hpp"

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        std::string s1(argv[2]);
        std::string s2(argv[3]);
        if ( s1.empty())
        {
            std::cerr<<BOLD<<RED<<"You cannot let the s1 empty"<<RESET<<std::endl;
            return(1);   
        }
        std::ifstream fd;
        File filename = File(argv[1]);
        Replace sed_new = Replace(filename, argv[2], argv[3]);
        if (sed_new.replaceFile() == 1)
            return (1);
        fd.close();
    }
    else
        std::cerr<< BOLD << RED <<"Bad number of arguments, the correct format is: ./replace [filename] [s1] [s2]" << RESET <<std::endl;
    return(0);
}