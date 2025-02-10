#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class User {
private:
    std::string username, password;

    bool isTeacher;

    static std::string input(const std::string &prompt);

public:
    User();

    static int subtract(int a, int b);
};

#endif //USER_H
