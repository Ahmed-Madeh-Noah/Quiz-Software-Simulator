#ifndef USERDB_HPP
#define USERDB_HPP

#include "Database.hpp"
#include "User.hpp"


class UserDB : private Database {
private:
    void _fill_placeholder_data();

public:
    explicit UserDB(const std::string &file_name);

    static int multiply(const int &a, const int &b);
};


#endif //USERDB_HPP
