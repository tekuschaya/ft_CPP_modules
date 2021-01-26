/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 09:17:40 by odhazzar          #+#    #+#             */
/*   Updated: 2020/11/24 10:47:55 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void search_contact(Contact *data, int count)
{
	std::string buf;
	int id;
	int i = 0;

	while (i < count)
	{
		data[i].print_elem_with_id(i);
		i++;
	}
	while (true)
	{
		std::cout << "Enter id: ";
		std::getline(std::cin, buf);
		id = std::atoi(buf.c_str());
		if (id < 1 || id > 8 || id > count)
			std::cout << "Incorrect id!" << std::endl;
		else
		{
			data[id - 1].print_all();
			break ;
		}
	}
}

int main()
{
	std::string buf;
	Contact *data;
	data = new Contact[8];
	int count = 0;

	while (true)
	{
		std::cout << "Enter command (ADD, EXIT, SEARCH): ";
		std::getline(std::cin, buf);
		if (buf == "ADD")
		{
			if (count > 7)
				std::cout << "Phonebook has already contained 8 contacts. No more!" << std::endl;
			else
			{
				data[count].add_contact();
				count++;
			}
		}
		else if (buf == "SEARCH")
		{
			if (count == 0)
				std::cout << "Phonebook hasn't contained a contacts yet" << std::endl;
			else
				search_contact(data, count);
		}
		else if (buf == "EXIT")
		{
			delete [] data;
			break ;
		}
	}
	return 0;
}