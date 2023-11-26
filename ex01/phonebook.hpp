/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:07:36 by haarab            #+#    #+#             */
/*   Updated: 2023/11/12 13:10:54 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook {
	private:
		Contact contacts[8];
		int index;
	public:
		Phonebook();
		void SetContact(std::string fname, std::string lname,
				std::string nickname, std::string secret, std::string phone);
		void ssearch();
};


#endif