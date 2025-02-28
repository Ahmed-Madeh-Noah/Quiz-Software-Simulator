#ifndef USERDB_HPP
#define USERDB_HPP


#include <rapidcsv.h>
#include <User.hpp>

class UserDB : private rapidcsv::Document {
private:
    const std::string _fileName = "User Database.csv";

    int get_users_count() const;

public:
    UserDB();

    ~UserDB();

    static int multiply(const int &a, const int &b);
};


#endif //USERDB_HPP
