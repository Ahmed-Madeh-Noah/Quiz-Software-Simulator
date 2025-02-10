#include "User.hpp"

std::string User::input(const std::string &prompt) {
    std::string output;
    printf("Enter %s:", prompt.c_str());
    getline(std::cin, output);
    if (output.empty()) {
        printf("Cannot accept an empty input\n");
        return input(prompt);
    }
    return output;
}

User::User() {
    ;
}

int User::subtract(int a, int b) {
    return a - b;
}
