#ifndef SESSION_HPP
#define SESSION_HPP


#include "UserDB.hpp"
#include "QuizDB.hpp"

class Session {
private:
    UserDB _userDB;
    QuizDB _quizDB;

public:
    static int add(const int &a, const int &b);
};


#endif //SESSION_HPP
