/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polepie <polepie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:01:39 by pepie             #+#    #+#             */
/*   Updated: 2024/11/12 18:19:34 by polepie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>

bool    verifyIfFileExist(char *str)
{
    std::ifstream file;
    file.open(str);
    if (file.fail() || !file) 
        return (1);
    file.close();
    return (0);
}

std::string replace(std::string strIn, char *find, std::string rep)
{
    std::string target;

    int pos = strIn.find(find);
    int sizeFind = std::strlen(find);

    while (pos > -1) {
        if (pos > 0)
            target.append(strIn.substr(0, pos));

        target.append(rep);
        strIn.erase(0, pos + sizeFind);

        pos = strIn.find(find);
    }

    if (pos == -1)
    {
        target.append(strIn);
    }

    return (target);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {   
        std::cout << "Error using mysed. Usage ./mysed file.txt 'replace' 'by this'" << std::endl;
        return 1;
    }
    std::ifstream fileIn;
    fileIn.open(argv[1]);
    if (!fileIn.is_open()) 
    {
        std::cout << "Error file " << argv[1] << " cannot be opened!" << std::endl;
        return (1);
    }

    std::string     fname, line, replaced;
    std::ofstream   file;

    fname = argv[1];
    file.open(fname + ".replace");

    while ( std::getline (fileIn,line) )
    {
        if(fileIn.eof())
        {
            replaced = replace((char *)line.c_str(), argv[2], argv[3]);
            file << replaced;
            break;
        }
        replaced = replace((char *)line.c_str(), argv[2], argv[3]);
        file << replaced << std::endl;
    }
    fileIn.close();
    file.close();

    return (0);
}