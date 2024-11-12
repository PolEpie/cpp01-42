/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepie <pepie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:01:39 by pepie             #+#    #+#             */
/*   Updated: 2024/11/08 17:34:20 by pepie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon( void ) {
    return;
}

Weapon::Weapon( std::string type ) {
    this->type = type;
    return;
}

Weapon::~Weapon( void ) {
    return;
}

void    Weapon::setType(std::string type) {
    this->type = type;
}

const std::string&   Weapon::getType(void)
{
    return (this->type);
}