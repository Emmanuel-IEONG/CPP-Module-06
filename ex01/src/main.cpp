/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:20:52 by eieong            #+#    #+#             */
/*   Updated: 2025/12/15 14:42:55 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"
#include "../include/Data.hpp"

int	main()
{
	Data	data;
	data.some = "Hey";
	data.thing = 123;
	Data	*ptr = &data;

	uintptr_t	raw = Serializer::serialize(ptr);
	Data	*deserialized = Serializer::deserialize(raw);
	std::cout << data;
	std::cout << "Original ptr: " << ptr << std::endl;
	std::cout << "Deserialized ptr: " << deserialized << std::endl;
	std::cout << "Deserialized Data: " << *deserialized << std::endl;
	std::cout << "-------------------------- CHANGING VALUE --------------------------" << std::endl;
	deserialized->some = "CHANGED";
	std::cout << "Deserialized Data: " << *deserialized;
	std::cout << data << std::endl;
	std::cout << "-------------------------- TEST PTR NULL --------------------------" << std::endl;
	Data	*ptr_null = NULL;
	uintptr_t	raw_null = Serializer::serialize(ptr_null);
	Data	*deserialized_null = Serializer::deserialize(raw_null);
	std::cout << "Original ptr: " << ptr_null << std::endl;
	std::cout << "Deserialized ptr: " << deserialized_null << std::endl;
	
	return (0);
}
