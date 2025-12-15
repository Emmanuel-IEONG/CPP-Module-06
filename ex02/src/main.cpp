/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:51:19 by eieong            #+#    #+#             */
/*   Updated: 2025/12/15 19:05:44 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include <iostream>
#include <cstdlib>

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
			return (new A);
		case 1:
			return (new B);
		default:
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
	Base*	ptr[10];

	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		ptr[i] = generate();
	std::cout << "------------------------ Identify pointer ------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
		identify(ptr[i]);
	std::cout << "------------------------ Identify reference ------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
		identify(*ptr[i]);
	for (int i = 0; i < 10; i++)
		delete ptr[i];
	return (0);
}
