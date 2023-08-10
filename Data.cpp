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

void Data::addMember(std::string member)
{
    m_teamMembers.push_back(member);
}