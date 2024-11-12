/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepie <pepie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:01:39 by pepie             #+#    #+#             */
/*   Updated: 2024/11/08 16:54:57 by pepie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Zombie.hpp"

int main()
{
    std::cout << "Creating 3 horde zombies" << std::endl;

    Zombie  *zombies = zombieHorde(3, "Zombie 1");

    for (int i = 0; i < 3; i++)
        zombies[i].announce();

    delete [] zombies;

	return 0;
}