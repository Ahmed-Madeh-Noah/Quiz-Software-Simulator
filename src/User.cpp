#include "User.hpp"

int User::subtract(int a, int b) {
    return a - b;
}

bool User::validate_int(const std::string &input) {
    return all_of(input.begin(), input.end(), ::isdigit);
}
