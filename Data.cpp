#include "Data.h"
#include <iostream>


void Data::listMembers()
{
    for (auto member: m_teamMembers)
    {
        std::cout << member << " ";
    }
    std::cout << std::endl;
}