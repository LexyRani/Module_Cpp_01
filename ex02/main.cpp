/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:18:20 by aceralin          #+#    #+#             */
/*   Updated: 2024/01/24 18:47:23 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout<<"&string: "<< &string<<std::endl;
    std::cout<<"This is the adresse stored in stringPTR: " << stringPTR<<std::endl;
    std::cout<<"This is the adresse stored in &stringREF: "<< &stringREF<<std::endl;
    
    std::cout<<"string: "<< string<<std::endl;
    std::cout<<"stringPTR: " << *stringPTR<<std::endl;
    std::cout<<"stringREF: "<< stringREF<<std::endl; 
}