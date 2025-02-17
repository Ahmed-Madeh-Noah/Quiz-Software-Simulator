#ifndef USER_HPP
#define USER_HPP

#include "UserDB.hpp"


class User {
private:
    static bool validate_int(const std::string &input);

    static std::string input(const std::string &prompt, const std::string &data_type = "std::string");

public:
    static int subtract(int a, int b);
};


#endif //USER_HPP
