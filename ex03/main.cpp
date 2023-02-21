/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 07:50:26 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/21 08:57:59 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp" 
#include "HumanB.class.hpp" 

void	default_test()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}

void	my_test()
{
	Weapon secret("determination");
	HumanA zoui("Zoui", secret);
	zoui.attack();
	secret.setType("dhsfgdhdaj");
	Weapon sword("basic sword");
	sword.setType("epic sword");
	HumanB test("Test");
	test.setWeapon(sword);
	zoui.attack();
	test.attack();
}

int main()
{
	default_test();
	std::cout << "\n\n\n";
	my_test();
	return 0;
}
