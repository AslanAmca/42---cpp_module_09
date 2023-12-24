/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 22:22:27 by aaslan            #+#    #+#             */
/*   Updated: 2023/12/25 01:31:51 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}

	BitcoinExchange btc;

	try
	{
		btc.initializeDatabase();

		std::string input(argv[1]);

		btc.handleInputFile(input);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	(void)argv;

	return 0;
}