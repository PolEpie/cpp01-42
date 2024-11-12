/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepie <pepie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:01:39 by pepie             #+#    #+#             */
/*   Updated: 2024/11/08 16:53:48 by pepie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstring>
# include <string>

class Zombie {

public:
	Zombie( void );
	~Zombie( void );
    void    announce( void );
    void	initZombie(std::string name);

private:
    std::string name;
};

Zombie  *zombieHorde(int N, std::string name );
