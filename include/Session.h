#ifndef SESSION_H
#define SESSION_H

#include "User.h"

class Session {
private:
    User *user;

public:
    Session();

    static int add(int a, int b);

    ~Session();
};

#endif //SESSION_H
