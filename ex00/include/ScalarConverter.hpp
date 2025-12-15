/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 14:58:09 by eieong            #+#    #+#             */
/*   Updated: 2025/12/15 12:36:40 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
	#define SCALARCONVERTER_HPP
	#include <iostream>
	#include <string>

	enum	e_type
	{
		CHAR = 0,
		INT = 1,
		FLOAT = 2,
		DOUBLE = 3,
		SPECIAL = 4,
		INVALID = 5
	};
	
	class	ScalarConverter
	{
		private:
			ScalarConverter();
			ScalarConverter(ScalarConverter const & src);
			~ScalarConverter();
			ScalarConverter &	operator=(ScalarConverter const & rhs);
		public:
			static void	convert(const std::string str);
	};

	e_type	chooseType(const std::string str);
	void	printSpecial(const std::string str);
	void	convertChar(const std::string str);
	void	convertInt(const std::string str);
	void	convertFloat(const std::string str);
	void	convertDouble(const std::string str);

#endif
