/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:57:45 by eieong            #+#    #+#             */
/*   Updated: 2025/12/15 14:16:58 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer Default constructor called" << std::endl;
}

Serializer::Serializer(Serializer const & src)
{
	std::cout << "Serializer Copy constructor called" << std::endl;
	(void) src;
}

Serializer::~Serializer()
{
	std::cout << "Serializer Destructor called" << std::endl;
}

Serializer &	Serializer::operator=(Serializer const & rhs)
{
	std::cout << "Serializer Copy assignment operator called" << std::endl;
	(void) rhs;
	return (*this);
}
uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
