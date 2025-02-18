#include "User.hpp"
#include <algorithm>

User::User(const std::string &input_username) {
    username = input_username;
}

User::User(const std::string &input_username, const std::string &input_password, const std::string &input_type,
           const int input_rowNumber) {
    username = input_username;
    password = input_password;
    type = input_type;
    rowNumber = input_rowNumber;
}

bool User::_validate_int(const std::string &input) {
    return all_of(input.begin(), input.end(), ::isdigit);
}

std::string User::_input(const std::string &prompt, const std::string &data_type) {
    std::string output;
    bool askForInput = true;
    while (askForInput) {
        printf("%s", prompt.c_str());
        std::getline(std::cin, output);
        askForInput = false;
        if (output.empty()) {
            printf("Cannot accept empty input\n");
            askForInput = true;
        }
        if ("int" == data_type && !_validate_int(output)) {
            printf("Cannot accept non-numeric input\n");
            askForInput = true;
        }
    }
    return output;
}

int User::subtract(const int &a, const int &b) {
    return a - b;
}
