#ifndef USER_HPP
#define USER_HPP


#include <string>

class User {
public:
    static int add(int a, int b);

    static bool is_empty_or_whitespace(const std::string &str);
};


#endif //USER_HPP
