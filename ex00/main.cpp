/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepie <pepie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:01:39 by pepie             #+#    #+#             */
/*   Updated: 2024/11/08 16:36:05 by pepie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Zombie.hpp"

int main()
{
    std::cout << "Creating 3 stack zombies" << std::endl;

    randomChump("Zombie 1");
    randomChump("Zombie 2");
    randomChump("Zombie 3");

    std::cout << "Creating 3 heap zombies" << std::endl;

    Zombie  *zombie1 = newZombie("Zombie 4");
    Zombie  *zombie2 = newZombie("Zombie 5");
    Zombie  *zombie3 = newZombie("Zombie 6");

    zombie1->announce();
    zombie2->announce();
    zombie3->announce();

    delete zombie1;
    delete zombie2;
    delete zombie3;
	return 0;
}