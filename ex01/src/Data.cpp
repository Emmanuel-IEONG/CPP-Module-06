/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:33:12 by eieong            #+#    #+#             */
/*   Updated: 2025/12/15 14:35:00 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"

std::ostream	&operator<<(std::ostream &out, Data &data)
{
	out << "Data: " << data.some << ", " << data.thing << std::endl;
	return (out);
}

