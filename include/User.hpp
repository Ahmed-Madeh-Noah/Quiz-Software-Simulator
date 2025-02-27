#ifndef USER_HPP
#define USER_HPP


#include <iostream>

class User {
public:
    static std::string input(const std::string &main_prompt, const std::string &data_type = "std::string",
                             const std::string &other_option = "");

    static int subtract(const int &a, const int &b);
};


#endif //USER_HPP
