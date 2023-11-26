/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:35:10 by haarab            #+#    #+#             */
/*   Updated: 2023/11/12 15:12:24 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
	int i;
	int j;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (ac > 1)
	{
		j = 1;
		while (av[j])
		{
			i = 0;
			while (av[j][i])
			{
				if (av[j][i] >= 'a' && av[j][i] <= 'z')
					av[j][i] = std::toupper(av[j][i]);
				i++;
			}
			std::cout << av[j] ;
			j++;
		}
	}
	std::cout << std::endl;
	return (0);
}