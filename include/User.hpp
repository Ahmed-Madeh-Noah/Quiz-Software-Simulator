#ifndef USER_HPP
#define USER_HPP


#include <iostream>
#include <string>

class User {
private:
    static bool _isValidInput(const std::string &input, const std::string &data_type = "std::string");

public:
    static std::string input(const std::string &prompt, const std::string &data_type = "std::string");

    static int subtract(const int &a, const int &b);
};


#endif //USER_HPP
