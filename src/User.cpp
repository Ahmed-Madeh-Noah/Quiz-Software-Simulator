#include "User.hpp"

bool User::_isValidInput(const std::string &input, const std::string &data_type) {
    if (input.empty()) {
        printf("Cannot accept empty input\n");
        return false;
    }
    if ("bool" == data_type)
        if (!("yes" == input || "no" == input)) {
            printf("Can only accept 'yes' or 'no'\n");
            return false;
        }
    return true;
}

std::string User::input(const std::string &prompt, const std::string &data_type) {
    std::string output;
    do {
        printf("Enter %s:", prompt.c_str());
        std::getline(std::cin, output);
    } while (!_isValidInput(output, data_type));
    return output;
}

int User::subtract(const int &a, const int &b) {
    return a - b;
}
