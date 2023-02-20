/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 07:41:10 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/20 07:46:07 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream> 

int main()
{
	//init
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	//address
	std::cout << "ptr :" << stringPTR << std::endl;
	std::cout << "ref :" << &stringREF << std::endl;

	//value
	std::cout << "ptr :" << *stringPTR << std::endl;
	std::cout << "ref :" << stringREF << std::endl;

}

