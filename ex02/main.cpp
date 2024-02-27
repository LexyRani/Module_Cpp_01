/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:18:20 by aceralin          #+#    #+#             */
/*   Updated: 2024/02/27 18:31:41 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout<<"This is the adresse stored in string: "<< &string<<std::endl;
    std::cout<<"This is the adresse stored in stringPTR: " << stringPTR<<std::endl;
    std::cout<<"This is the adresse stored in &stringREF: "<< &stringREF<<std::endl;
    
    std::cout<<"This is the value of the string: "<< string<<std::endl;
    std::cout<<"This is the value pointed by stringPTR: " << *stringPTR<<std::endl;
    std::cout<<"This is the value pointed by stringREF: "<< stringREF<<std::endl; 
}