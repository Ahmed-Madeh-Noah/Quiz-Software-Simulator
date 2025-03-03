#include "User.hpp"
#include <algorithm>

int User::add(const int a, const int b) {
    return a + b;
}

bool User::is_empty_or_whitespace(const std::string &str) {
    return str.empty() || std::all_of(str.begin(), str.end(), isspace);
}
