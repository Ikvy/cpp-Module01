/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:04:33 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/20 09:53:28 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name){

	HumanA::weapon = &weapon;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	HumanA::weapon = &weapon;
}

void	HumanA::attack(void)
{
	std::cout << HumanA::name << " attacks with their " << HumanA::weapon->getType() << std::endl;
}

