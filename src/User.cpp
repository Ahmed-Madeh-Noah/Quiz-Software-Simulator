#include "User.hpp"
#include <algorithm>
#include <iostream>

int User::add(const int a, const int b) {
    return a + b;
}

bool User::is_empty_or_whitespace(const std::string &str) {
    return str.empty() || std::all_of(str.begin(), str.end(), isspace);
}

std::string User::input(const std::string &prompt) {
    do {
        printf("Enter %s or 0 to exit:", prompt.c_str());
        std::string raw_input;
        std::getline(std::cin, raw_input);
        if (is_empty_or_whitespace(raw_input)) {
            printf("Cannot accept empty input\n");
            continue;
        }
        if (raw_input == "0")
            return "";
        return raw_input;
    } while (true);
}
