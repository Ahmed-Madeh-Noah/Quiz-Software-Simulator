#include "User.hpp"

std::string User::input(const std::string &prompt) {
    std::string output;
    while (output.empty()) {
        printf("Enter %s:", prompt.c_str());
        std::getline(std::cin, output);
        if (output.empty())
            printf("Cannot accept empty input\n");
    }
    return output;
}

int User::subtract(const int &a, const int &b) {
    return a - b;
}
