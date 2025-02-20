#ifndef USER_HPP
#define USER_HPP


#include <iostream>
#include <string>

class User {
public:
    static int subtract(const int &a, const int &b);

    static std::string input(const std::string &prompt);
};


#endif //USER_HPP
