#ifndef USERDB_HPP
#define USERDB_HPP


#include "Database.hpp"

class UserDB : private Database {
public:
    static int subtract(const int &a, const int &b);
};


#endif //USERDB_HPP
