/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:26:11 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/20 07:04:07 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int main()
{
	Zombie *zombie;
	zombie = newZombie("Bebou");
	zombie->announce();

	randomChump("Uobeb");
	delete zombie;
}
