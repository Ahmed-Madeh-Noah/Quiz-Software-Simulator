#include "User.hpp"
#include <iostream>

std::string User::input(const std::string &prompt) {
    std::string input_text;
    do {
        printf("Enter %s:", prompt.c_str());
        std::getline(std::cin, input_text);
        if (input_text.empty())
            printf("Cannot accept empty input\n");
    } while (input_text.empty());
    return input_text;
}

int User::subtract(const int &a, const int &b) {
    return a - b;
}
