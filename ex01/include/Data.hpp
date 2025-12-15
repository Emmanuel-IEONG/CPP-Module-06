/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:13:27 by eieong            #+#    #+#             */
/*   Updated: 2025/12/15 14:33:06 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
	#define DATA_HPP
	#include <string>
	#include <iostream>

	struct	Data
	{
		std::string	some;
		int			thing;
	};

	std::ostream	&operator<<(std::ostream &out, Data &data);
#endif
