#ifndef USERDB_HPP
#define USERDB_HPP


#include <rapidcsv.h>

class UserDB : private rapidcsv::Document {
private:
    const std::string _fileName = "User Database.csv";

public:
    UserDB();

    ~UserDB();

    static int multiply(const int &a, const int &b);
};


#endif //USERDB_HPP
