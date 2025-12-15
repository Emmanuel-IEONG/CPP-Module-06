/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_type.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:47:38 by eieong            #+#    #+#             */
/*   Updated: 2025/12/15 19:09:51 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"
#include <string>
#include <iostream>
#include <cstddef> // size_t
#include <cctype> // isdigit

static bool	check_double(const std::string str, std::size_t &dot, std::size_t &f)
{
	std::size_t i = 0;

	if (dot == std::string::npos || f != std::string::npos)
		return (false);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < dot)
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	i++;
	if (!str[i])
		return (false);
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

static bool	check_float(const std::string str, std::size_t &dot, std::size_t &f)
{
	std::size_t	i = 0;

	if (dot == std::string::npos || f == std::string::npos)
		return (false);
	if (f != str.find_first_of('f'))
		return (false);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < dot)
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	i++;
	if (!str[i] || !isdigit(str[i]))
		return (false);
	while (str[i])
	{
		if (!isdigit(str[i]) && str[i] != 'f')
			return (false);
		if (str[i] == 'f' && i != str.length() - 1)
			return (false);
		i++;
	}
	return (true);
}

static bool	check_int(const std::string str)
{
	if (str.find_last_of("-+") != std::string::npos && str.find_last_of("-+") != 0)
		return (false);
	if ((str.find_first_not_of("+-0123456789") == std::string::npos))
		return (true);
	else
		return (false);
}

static bool	check_char(const std::string str)
{
	if (str.length() == 1 && str.find_first_of("0123456789") == std::string::npos)
		return (true);
	else
		return (false);
}

static bool	check_special(const std::string str)
{
	if (!str.compare("nan") || !str.compare("nanf") || !str.compare("+inf") || !str.compare("+inff") || !str.compare("-inf") || !str.compare("-inff"))
		return (true);
	else
		return (false);
}

e_type	chooseType(const std::string str)
{
	std::size_t	dotpos = str.find('.');
	std::size_t	fpos = str.find('f');

	if (check_special(str))
		return (SPECIAL);
	else if (check_char(str))
		return (CHAR);
	else if ((str.find_first_not_of("-+.f0123456789") == std::string::npos))
	{
		if (dotpos == std::string::npos && fpos == std::string::npos)
		{
			if (check_int(str))
				return (INT);
			else
				return (INVALID);
		}
		else if (check_float(str, dotpos, fpos))
			return (FLOAT);
		else if (check_double(str, dotpos, fpos))
			return (DOUBLE);
	}
	return (INVALID);
}
