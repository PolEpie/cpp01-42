/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polepie <polepie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:01:39 by pepie             #+#    #+#             */
/*   Updated: 2024/11/12 18:44:33 by polepie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "Test with fake level" << std::endl;
    harl.complain("Test");

    std::cout << std::endl;

    std::cout << "Test with DEBUG level" << std::endl;
    harl.complain("DEBUG");

    std::cout << std::endl;

    std::cout << "Test with INFO level" << std::endl;
    harl.complain("INFO");

    std::cout << std::endl;

    std::cout << "Test with WARNING level" << std::endl;
    harl.complain("WARNING");

    std::cout << std::endl;

    std::cout << "Test with ERROR level" << std::endl;
    harl.complain("ERROR");

}