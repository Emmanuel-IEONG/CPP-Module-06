/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:51:19 by eieong            #+#    #+#             */
/*   Updated: 2025/12/15 14:57:35 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include <iostream>
#include <cstdlib>

Base * generate(void)
{
	static int	r;
	srand(time(NULL) + r);
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
	
}

void identify(Base& p)
{

}

int	main()
{
	
}
