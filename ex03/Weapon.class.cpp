/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 07:56:12 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/20 09:21:10 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp" 

Weapon::Weapon(std::string type)
{
	Weapon::type = type;
}

const std::string Weapon::getType()
{
	const std::string &ref = Weapon::type;

	return (ref);
}

void Weapon::setType(std::string newType)
{
	Weapon::type = newType;
}
