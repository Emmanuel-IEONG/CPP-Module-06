/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:51:19 by eieong            #+#    #+#             */
/*   Updated: 2026/01/05 11:32:45 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include <iostream>
#include <cstdlib>
#define GEN_NB 5

static void	print_type(std::string str)
{
	std::cout << str << std::endl;
}

Base * generate(void)
{
	int	choose = rand() % 3;
	switch (choose)
	{
		case 0:
			print_type("A");
			return (new A);
		case 1:
			print_type("B");
			return (new B);
		default:
			print_type("C");
			return (new C);
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		print_type("A");
	else if (dynamic_cast<B*>(p))
		print_type("B");
	else if (dynamic_cast<C*>(p))
		print_type("C");
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		print_type("A");
	}
	catch(const std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<B&>(p);
		print_type("B");
	}
	catch(const std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<C&>(p);
		print_type("C");
	}
	catch(const std::exception& e)
	{}
}

int	main()
{
	Base*	ptr[GEN_NB];

	srand(time(NULL));
	std::cout << "------------------------ Generate Base pointer ------------------------" << std::endl;
	for (int i = 0; i < GEN_NB; i++)
		ptr[i] = generate();
	std::cout << "------------------------ Identify pointer ------------------------" << std::endl;
	for (int i = 0; i < GEN_NB; i++)
		identify(ptr[i]);
	std::cout << "------------------------ Identify reference ------------------------" << std::endl;
	for (int i = 0; i < GEN_NB; i++)
		identify(*ptr[i]);
	for (int i = 0; i < GEN_NB; i++)
		delete ptr[i];
	return (0);
}
