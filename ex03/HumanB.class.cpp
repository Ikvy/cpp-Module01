/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:07:30 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/20 09:52:10 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"

HumanB::HumanB(std::string name) : name(name){
	HumanB::weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	HumanB::weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << HumanB::name << " attacks with their " << HumanB::weapon->getType() << std::endl;
}
