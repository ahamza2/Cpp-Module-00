/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:53:11 by haarab            #+#    #+#             */
/*   Updated: 2023/11/10 20:50:16 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string Contact::GetNickName()
{
	return (this->nickname);
}

std::string Contact::GetFirstName()
{
	return (this->first_name);
}

std::string Contact::GetLastName()
{
	return (this->last_name);
}

std::string Contact::GetPhoneNumber()
{
	return (this->phone_number);
}

std::string Contact::GetDarkestSecret()
{
	return (this->darkest_secret);
}

void Contact::SetNickName(std::string str)
{
	this->nickname = str;
}

void Contact::SetFirstName(std::string str)
{
	this->first_name = str;
}

void Contact::SetLastName(std::string str)
{
	this->last_name = str;
}

void Contact::SetPhoneNumber(std::string str)
{
	this->phone_number = str;
}

void Contact::SetDarkestSecret(std::string str)
{
	this->darkest_secret = str;
}
