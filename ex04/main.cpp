/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:50:20 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/14 19:34:04 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "File.hpp"
#include "replace.hpp"

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        File filename = File(argv[1]);
        Replace replace = Replace(filename, argv[2], argv[3]);
        
        // std::fstream fd;
        // fd.open(argv[1], std::fstream::in | std::fstream::out);
        // std::cout<<&fd <<"fd open"<<std::endl;
        
        // fd << "juste un test pour voir le comportement";
        // fd.close();
        //verifier le nombre de parametre, il en faut 3
        //verifier les entrees inatendues
        //-un nom de fichier
        //-deux string s1 et s2
        
        // comprendre le fonctionnement de la commande sed
        //ouverture de fichier?
        //remplacer dans le nouveau fichier les occurences de s1 par s2
    }
    else
        std::cout<<"bad arguments"<<std::endl;
    return(0);
}