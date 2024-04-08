/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:03:18 by mapfenni          #+#    #+#             */
/*   Updated: 2024/04/08 20:12:13 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* z;
	int		hordeSize = 2;

	z = zombieHorde(hordeSize, "glumbo");
	for (int i = 0; i < hordeSize; ++i)
		z[i].annonce();
	delete []z;
	return (0);
}
