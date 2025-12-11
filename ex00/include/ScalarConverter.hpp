/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 14:58:09 by eieong            #+#    #+#             */
/*   Updated: 2025/12/09 12:19:42 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
	#define SCALARCONVERTER_HPP
	#include <iostream>
	#include <string>

	class	ScalarConverter
	{
		private:

		public:
			ScalarConverter();
			ScalarConverter(ScalarConverter const & src);
			~ScalarConverter();
			ScalarConverter &	operator=(ScalarConverter const & rhs);
			static void	convert(std::string str);
	};

#endif
