/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:11:42 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/20 14:42:50 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl test;

	test.complain("debug");
	test.complain("error");
	test.complain("warning");
	test.complain("info");
	test.complain("debug");
	test.complain("dsjkhdsjkahsdkadshk");
}
