#ifndef USER_HPP
#define USER_HPP


#include <iostream>
#include <string>

class User {
public:
    static std::string input(const std::string &prompt);

    static int subtract(const int &a, const int &b);
};


#endif //USER_HPP
