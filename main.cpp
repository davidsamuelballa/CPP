#include <iostream>
#include "Data.h"

int main()
{

    std::cout << "Hello World!" << std::endl;
    std::cout << "Give me the name of team members separated by space." << std::endl;
    Data myData;
    for (int i = 0;i<11;i++)
    {
        std::string data;
        std::cin >> data;
        myData.addMember(data);
    }
    myData.listMembers();

    return 0;
}