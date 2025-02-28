#include "User.hpp"

User::User(const std::vector<std::string> &row) {
    this->username = row.at(0);
    this->_password = row.at(1);
    this->_type = row.at(2);
}

User::User(const std::string &username) {
    this->username = username;
}

std::string User::input(const std::string &main_prompt, const std::string &data_type, const std::string &other_option) {
    while (true) {
        if (data_type == "std::string")
            printf("Enter %s:", main_prompt.c_str());
        else
            printf("Enter (1) for %s or (0) for %s:", main_prompt.c_str(), other_option.c_str());
        std::string rawInput;
        std::getline(std::cin, rawInput);
        if (rawInput.empty()) {
            printf("Cannot accept empty input\n");
            continue;
        }
        if (data_type == "bool" && rawInput != "1" && rawInput != "0") {
            printf("Can only accept 1 or 0\n");
            continue;
        }
        return rawInput;
    }
}

int User::subtract(const int &a, const int &b) {
    return a - b;
}
