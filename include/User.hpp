#ifndef USER_HPP
#define USER_HPP

#include "UserDB.hpp"


class User {
private:
    static bool validate_int(const std::string &input);

public:
    static int subtract(int a, int b);
};


#endif //USER_HPP
