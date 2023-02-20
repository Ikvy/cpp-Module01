/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 07:22:41 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/20 07:31:36 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie* zombieHorde( int N, std::string name);

int main()
{
	int i = 0;
	int	size = 8;
	std::string name = "Minishell";

	Zombie *horde = zombieHorde(size, name);
	for (i = 0; i < size; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	system("leaks horde"); 
}
