#ifndef USER_HPP
#define USER_HPP


#include <iostream>
#include <vector>

class User {
private:
    std::string _username, _password, _type;

    explicit User(const std::vector<std::string> &row);

public:
    explicit User(const std::string &username);

    static std::string input(const std::string &main_prompt, const std::string &data_type = "std::string",
                             const std::string &other_option = "");

    static int subtract(const int &a, const int &b);
};


#endif //USER_HPP
