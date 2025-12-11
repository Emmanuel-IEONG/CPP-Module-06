/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choosetype.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:47:38 by eieong            #+#    #+#             */
/*   Updated: 2025/12/09 18:27:27 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <climits>
#include <cstddef>
#include <cctype>

bool	checkFloat(std::string str, std::size_t &dot, std::size_t &f)
{
	for (std::size_t i = 0; i < dot - 1; i++)
	{
		if (!isdigit(str[i]) && i == 0 && str[i] != '-' && str[i] != '+')
			return (false);
		if (!isdigit(str[i]) && i != 0)
			return (false);
	}
	int	len = str.length();
	for (int i = dot + 1; i < len; i++)
	{
		if (!isdigit(str[i]) || (str[i] != 'f' && i != len - 1))
			return (false);
	}
	return (true);
}

void	chooseType(std::string str)
{
	std::size_t	dotpos = str.find('.');
	std::size_t	fpos = str.find('f');
	if ((str.find_first_not_of("-+.f0123456789") == std::string::npos))
	{
		// if (atol(str.c_str()) < INT_MIN || atol(str.c_str()) > INT_MAX)
		// 	return (false);
		if (dotpos != std::string::npos)
		{
			if (fpos != std::string::npos)
		}
	}
	return ();
}
