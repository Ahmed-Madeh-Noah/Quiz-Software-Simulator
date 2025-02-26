#ifndef QUIZDB_HPP
#define QUIZDB_HPP


#include "Database.hpp"

class QuizDB : private Database {
public:
    static int multiply(const int &a, const int &b);
};


#endif //QUIZDB_HPP
