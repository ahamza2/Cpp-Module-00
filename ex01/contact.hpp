/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:50:58 by haarab            #+#    #+#             */
/*   Updated: 2023/11/10 20:48:44 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>


class Contact
{
	private:
		std::string first_name;   
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	
	public:
		void SetFirstName(std::string str);
		void SetLastName(std::string str);
		void SetNickName(std::string str);
		void SetPhoneNumber(std::string str);
		void SetDarkestSecret(std::string str);

		std::string GetFirstName();
		std::string GetLastName();
		std::string GetNickName();
		std::string GetPhoneNumber();
		std::string GetDarkestSecret();
};


#endif