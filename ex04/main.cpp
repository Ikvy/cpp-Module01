/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:57:21 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/20 13:36:56 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	error(int ret, std::string error)
{
	std::cout << error << std::endl;
	return (ret);
}

int main(int ac, char **av)
{
	size_t	i = 42;
	std::string finalStr;
	if (ac != 4)
		return error(1, "Usage : <filename> <str to replace> <new str>");

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (filename.empty() || s1.empty() || s2.empty())
		return error(2, "parameter can't be empty");
	
	std::ifstream file(filename);
	if (!file)
		return error(3, "can't open file");
	std::string line;
	while (std::getline(file, line))
	{
		i = line.find(s1);
		while (i != std::string::npos)
		{
			line.erase(i, s1.length());
			line.insert(i,s2);
			i += s2.length();
			i = line.find(s1, i);
		}
		finalStr += (line + '\n');
	}
	std::ofstream outfile;
	outfile.open(filename + ".replace");
	outfile << finalStr;
	file.close();
	outfile.close();
}
