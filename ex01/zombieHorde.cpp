/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 07:10:50 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/20 07:30:05 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	int i = 0;
	Zombie *horde = new Zombie[N];

	for(i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}
