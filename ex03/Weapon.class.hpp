/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 07:54:03 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/20 09:10:59 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
#define WEAPON_CLASS_HPP
#include <iostream> 

class Weapon
{
	public:
		Weapon(std::string name);
		const std::string getType();
		void setType(std::string type);
	private:
		std::string type;
};

#endif
