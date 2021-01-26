/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 09:12:24 by odhazzar          #+#    #+#             */
/*   Updated: 2020/11/24 09:16:14 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void upper_str(char *s)
{
	while (*s)
	{
		std::cout << (char)toupper(*s);
		s++;
	}
}

int main(int argc, char **argv)
{
	int i;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (i = 1; argv[i]; i++)
			upper_str(argv[i]);
	}
	std::cout << std::endl;
	return 0;
}