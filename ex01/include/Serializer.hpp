/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:57:03 by eieong            #+#    #+#             */
/*   Updated: 2025/12/15 14:37:06 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
	#define SERIALIZER_HPP
	#include <iostream>
	#include <stdint.h>
	#include "Data.hpp"
	
	class	Serializer
	{
		private:
			Serializer();
			Serializer(Serializer const & src);
			~Serializer();
			Serializer &	operator=(Serializer const & rhs);
		public:
			static uintptr_t serialize(Data* ptr);
			static Data* deserialize(uintptr_t raw);
	};

#endif
