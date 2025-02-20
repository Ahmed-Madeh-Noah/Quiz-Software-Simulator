#ifndef USERDB_HPP
#define USERDB_HPP


#include "Database.hpp"
#include "User.hpp"

class UserDB : public Database {
private:
    explicit UserDB();

public:
    static int multiply(const int &a, const int &b);
};


#endif //USERDB_HPP
