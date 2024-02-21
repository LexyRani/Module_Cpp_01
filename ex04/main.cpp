/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:50:20 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/21 22:18:57 by aceralin         ###   ########.fr       */
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
        std::fstream fd;
        File filename = File(argv[1]);
        fd.open(argv[1], std::fstream::in | std::fstream::out);
        if (!fd.is_open())
        {
            std::cerr<< filename.getName() << ": No such a file or directory" <<std::endl;
            return (1);
        }
        Replace replace = Replace(filename, argv[2], argv[3]);
        replace.fillBuffer();
        if (replace.replaceFile() == 1)
            return (1);
        fd.close();
    }
    else
        std::cout<< BOLD << RED <<"Bad number of arguments, the correct format is: ./replace [filename] [s1] [s2]" << RESET <<std::endl;
    return(0);
}