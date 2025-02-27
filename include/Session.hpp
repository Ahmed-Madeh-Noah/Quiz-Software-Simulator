#ifndef SESSION_HPP
#define SESSION_HPP


#include <UserDB.hpp>

class Session {
private:
    UserDB _userDB;

public:
    static int add(const int &a, const int &b);
};


#endif //SESSION_HPP
