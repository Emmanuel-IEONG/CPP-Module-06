/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_type.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:47:34 by eieong            #+#    #+#             */
/*   Updated: 2025/12/15 11:13:33 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"
#include <string>
#include <iostream>

void	convertChar(const std::string str)
{
	if (isprint(str[0]))
	{
		std::cout << "char: '" << str << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
	}
	else
		std::cout << "char: Non displayable\nThe type conversion is impossible" << std::endl;
}

void	printSpecial(const std::string str)
{
	if (str.find("nan") != std::string::npos)
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
	else if (str.find("-inf") != std::string::npos)
		std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
	else if (str.find("+inf") != std::string::npos)
		std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf" << std::endl;
}
