#ifndef USER_HPP
#define USER_HPP

#include <iostream>


class User {
private:
    static bool _validate_int(const std::string &input);

    static std::string _input(const std::string &prompt, const std::string &data_type = "std::string");

public:
    std::string username, password, type;
    int rowNumber;

    explicit User(const std::string &input_username);

    User(const std::string &input_username, const std::string &input_password, const std::string &input_type,
         int input_rowNumber);

    static int subtract(int a, int b);
};


#endif //USER_HPP
