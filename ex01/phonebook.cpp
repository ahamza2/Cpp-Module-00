/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:07:39 by haarab            #+#    #+#             */
/*   Updated: 2023/11/12 13:40:38 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	index = 0;
}

void Phonebook::SetContact(std::string fname, std::string lname, std::string nickname, std::string secret, std::string phone)
{
	if (this->index >= 8)
	{
		int count;
		while (count < 7)
		{
			contacts[count] = contacts[count + 1];
			count++;
		}
		index = 7;
	}
	contacts[index].SetFirstName(fname);
	contacts[index].SetLastName(lname);
	contacts[index].SetNickName(nickname);
	contacts[index].SetPhoneNumber(phone);
	contacts[index].SetDarkestSecret(secret);
	this->index++;
}

long	ft_atoi(std::string str)
{
	int		i;
	long		n;
	long		res;

	i = 0;
	n = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 15) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			n *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * n);
}

int	ft_isdigit(std::string str)
{
	int i = 0;

	while (i < str.length())
	{
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void Phonebook::ssearch()
{
	std::cout << "____________________________________________" << std::endl;
	std::cout << std::setw(10) << "index" << '|' <<
	std::setw(10) << "firstName" << '|' <<
	std::setw(10) <<  "lastName" << '|' <<
	std::setw(10) <<  "nickName" << '|' << std::endl;
	std::cout << "--------------------------------------------" << std::endl;	
	int count = 0;
	while (count < this->index)
	{
		std::cout << std::setw(10) << count << '|';
		if (contacts[count].GetFirstName().length() > 10)
			std::cout << std::setw(9) << contacts[count].GetFirstName().substr(0, 9) << '.' << '|';
		else if (contacts[count].GetFirstName().length() <= 10)
			std::cout << std::setw(10) << contacts[count].GetFirstName().substr(0, 10) << '|';

		if (contacts[count].GetLastName().length() > 10)
			std::cout << std::setw(9) <<  contacts[count].GetLastName().substr(0, 9) << '.' << '|';
		else if (contacts[count].GetLastName().length() <= 10)
			std::cout << std::setw(10) <<  contacts[count].GetLastName().substr(0, 10) << '|';
		
		if (contacts[count].GetNickName().length() > 10)
			std::cout << std::setw(9) <<  contacts[count].GetNickName().substr(0, 9) << '.' << '|' << std::endl;
		else if (contacts[count].GetNickName().length() <= 10)
			std::cout << std::setw(10) <<  contacts[count].GetNickName().substr(0, 10) << '|' << std::endl;
	
		std::cout << "--------------------------------------------" << std::endl;
		count++;
	}
	std::cout << "what index do you want : ";
	std::string ind;
	std::getline(std::cin, ind);
	while (ind.empty() || !ft_isdigit(ind))
	{
		if (std::cin.eof())
			exit (0);
		std::cout << "what index do you want : ";
		std::getline(std::cin, ind);
	}
	int i;
	i = ft_atoi(ind);
	if (i >= 0 && i < index)
	{
		std::cout << std::setw(20) << std::left << "index" << ": " << i << std::endl;
		std::cout << std::setw(20) << std::left << "first Name" << ": " << contacts[i].GetFirstName() << std::endl;
		std::cout << std::setw(20) << std::left << "last Name" << ": " << contacts[i].GetLastName() << std::endl;
		std::cout << std::setw(20) << std::left << "nackName" << ": " << contacts[i].GetNickName() << std::endl;
		std::cout << std::setw(20) << std::left << "phone number" << ": " << contacts[i].GetPhoneNumber() << std::endl;
		std::cout << std::setw(20) << std::left << "darkest secret" << ": " << contacts[i].GetDarkestSecret() << std::endl;
	}
}

int main ()
{
	std::string add_cin;
	Phonebook myPhonebook;
	int numberContact = 0;
	while (std::cin)
	{
		std::cout << "what do you want : ";
		std::getline(std::cin, add_cin);
		while (add_cin.empty())
		{
			if (std::cin.eof())
				exit (0);
			std::cout << "what do you want : ";
			std::getline(std::cin, add_cin);
		}
		if (add_cin == "ADD")
		{
			std::string fname, lname, darksecret, phone, nickname;
			std::cout  << "Add First Name : ";
			std::getline(std::cin, fname);
			while (fname.empty())
			{
				if (std::cin.eof())
					exit (0);
				std::cout << "Add First Name : ";
				std::getline(std::cin, fname);
			}
			std::cout << "Add Last Name : ";
			std::getline(std::cin, lname);
			while (lname.empty())
			{
				if (std::cin.eof())
					exit (0);
				std::cout << "Add Last Name : ";
				std::getline(std::cin, lname);
			}
			std::cout << "Add Nickname : ";
			std::getline(std::cin, nickname);
			while (nickname.empty())
			{
				if (std::cin.eof())
					exit (0);
				std::cout << "Add Nickname : ";
				std::getline(std::cin, nickname);
			}
			std::cout << "Add Phone : ";
			std::getline(std::cin, phone);
			while (phone.empty())
			{
				if (std::cin.eof())
					exit (0);
				std::cout << "Add Phone : ";
				std::getline(std::cin, phone);
			}
			std::cout << "Add Darksecret : ";
			std::getline(std::cin, darksecret);
			while (darksecret.empty())
			{
				if (std::cin.eof())
					exit (0);
				std::cout << "Add Darksecret : ";
				std::getline(std::cin, darksecret);
			}
			myPhonebook.SetContact(fname, lname, nickname, darksecret, phone);
		}
		else if (add_cin == "SEARCH") {
			myPhonebook.ssearch();
		}
		else if (add_cin == "EXIT")
			return (0);
	}
	return (0);
}