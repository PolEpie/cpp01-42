/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepie <pepie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:01:39 by pepie             #+#    #+#             */
/*   Updated: 2024/11/08 17:33:35 by pepie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstring>
# include <string>
# include "Weapon.hpp"

class HumanB {

public:
	HumanB( std::string name );
	HumanB( std::string name, Weapon weapon );
	~HumanB( void );
    void    attack();
    void    setWeapon(Weapon weapon);

private:
    std::string name;
    Weapon      weapon;
};