/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepie <pepie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:01:39 by pepie             #+#    #+#             */
/*   Updated: 2024/11/08 17:33:31 by pepie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) {
    this->name = name;
    return;
}

HumanB::HumanB( std::string name, Weapon weapon ) {
    this->name = name;
    this->weapon = weapon;
    return;
}

HumanB::~HumanB( void ) {
    return;
}

void    HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}