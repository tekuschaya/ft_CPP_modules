/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 09:18:05 by odhazzar          #+#    #+#             */
/*   Updated: 2020/11/24 10:43:37 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::print_all()
{
	std::cout << std::setw(20) << std::left << "First name: " << this->first_name << std::endl;
	std::cout << std::setw(20) << "Last name: " << this->last_name << std::endl;
	std::cout << std::setw(20) << "Nickname: " << this->nickname << std::endl;
	std::cout << std::setw(20) << "Login: " << this->login << std::endl;
	std::cout << std::setw(20) << "Postal address: " << this->postal_address << std::endl;
	std::cout << std::setw(20) << "Email address: " << this->email_address << std::endl;
	std::cout << std::setw(20) << "Phone number: " << this->phone_number << std::endl;
	std::cout << std::setw(20) << "Birthday day: " << this->birthday_day << std::endl;
	std::cout << std::setw(20) << "Favorite meal: " << this->favorite_meal << std::endl;
	std::cout << std::setw(20) << "Underwear color: " << this->underwear_color << std::endl;
	std::cout << std::setw(20) << "Darkest secret: " << this->darkest_secret << std::endl;
}

void Contact::add_contact()
{
	std::cout << "First name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Login: ";
	std::getline(std::cin, this->login);
	std::cout << "Postal address: ";
	std::getline(std::cin, this->postal_address);
	std::cout << "Email address: ";
	std::getline(std::cin, this->email_address);
	std::cout << "Phone number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Birthday day: ";
	std::getline(std::cin, this->birthday_day);
	std::cout << "Favorite meal: ";
	std::getline(std::cin, this->favorite_meal);
	std::cout << "Underwear color: ";
	std::getline(std::cin, this->underwear_color);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
}

void Contact::print_elem_with_id(int i)
{
	if (std::strlen(this->first_name.c_str()) || std::strlen(this->last_name.c_str()) ||
	std::strlen(this->nickname.c_str()))
	{
		std::cout << std::setw(10) << std::right << i + 1 << '|';
		if (this->first_name.length() > 10)
			std::cout << std::setw(10) << this->first_name.substr(0, 9).append(".|");
		else 
			std::cout << std::setw(10) << this->first_name << '|';
		if (this->last_name.length() > 10)
			std::cout << std::setw(10) << this->last_name.substr(0, 9).append(".|");
		else 
			std::cout << std::setw(10) << this->last_name << '|';
		if (this->nickname.length() > 10)
			std::cout << std::setw(10) << this->nickname.substr(0, 9).append(".|") << std::endl;
		else 
			std::cout << std::setw(10) << this->nickname << '|' << std::endl;
	}
}
