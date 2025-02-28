#ifndef USER_HPP
#define USER_HPP


#include <iostream>

class User {
private:
    std::string _username, _password, _type;

public:
    User(const std::string &username);

    static std::string input(const std::string &main_prompt, const std::string &data_type = "std::string",
                             const std::string &other_option = "");

    static int subtract(const int &a, const int &b);
};


#endif //USER_HPP
