/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepie <pepie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:01:39 by pepie             #+#    #+#             */
/*   Updated: 2024/11/08 17:34:14 by pepie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstring>
# include <string>

class Weapon {

public:
	Weapon( void );
	Weapon( std::string type );
	~Weapon( void );
    const std::string&  getType( void );
    void                setType(std::string type);  

private:
    std::string type;
};
