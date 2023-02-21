/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:03:34 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/21 08:55:43 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
#define HUMANA_CLASS_HPP
#include "Weapon.class.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		void attack();
	private:
		std::string name;
		Weapon &weapon;
};
#endif
