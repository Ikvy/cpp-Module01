/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:42:35 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/17 14:37:43 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *badabada = new (Zombie);
	badabada->setName(name);
	return (badabada);
}
