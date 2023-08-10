#ifndef DATA_H
#define DATA_H

#include <vector>
#include <string>

class Data {
private:
    std::vector<std::string> m_teamMembers;

public:
    void listMembers();       
};

#endif //DATA_H