/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:38:31 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/23 06:47:50 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream> 

#include "Zombie.class.hpp"

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << Zombie::name << " has been destructed" << std::endl;
}

void Zombie::setName(std::string name)
{
	Zombie::name = name;
}

void Zombie::announce(void){

	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
