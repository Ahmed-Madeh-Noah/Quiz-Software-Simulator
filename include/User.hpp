#ifndef USER_H
#define USER_H

#include <iostream>

using namespace std;

class User {
private:
    string username, password;

    bool isTeacher;

    static string input(const string &prompt);

public:
    User();

    static int subtract(int a, int b);
};

#endif //USER_H
