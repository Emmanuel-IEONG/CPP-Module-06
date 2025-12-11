/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 14:58:22 by eieong            #+#    #+#             */
/*   Updated: 2025/12/11 15:38:24 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	std::cout << "ScalarConverter Copy constructor called" << std::endl;
	(void) src;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
}

ScalarConverter &	ScalarConverter::operator=(ScalarConverter const & rhs)
{
	std::cout << "ScalarConverter Copy assignment operator called" << std::endl;
	(void) rhs;
	return (*this);
}

/**
 * str ->	isInt = Only number
			isFloat + isDouble = detection du '.', si 'f' -> float, sinon double
			isChar = 0 < char < 127;

	stock le type puis convertit avec cast
 */

void	ScalarConverter::convert(const std::string str)
{
	e_type	type = chooseType(str);
	switch(type)
	{
		case INVALID:
			std::cout << "Invalid input" << std::endl;
			break;
		case SPECIAL:
			// printSpecial(str);
			break;
		case CHAR:
			// convertChar(str, len);
			break;
		case INT:
			// convertInt(str);
			break;
		case FLOAT:
			// convertFloat(str);
			break;
		case DOUBLE:
			// convertDouble(str);
			break;
	}
}
