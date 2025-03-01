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
            printf("Enter %s or (0) to exit:", main_prompt.c_str());
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

bool User::change_pin(const bool &first_time) {
    constexpr int MAX_PI_CHANGE_TRIALS = 3;
    int trials = 0;
    while (++trials <= MAX_PI_CHANGE_TRIALS) {
        if (!first_time) {
            std::string oldPassword = User::input("Your Old Password");
            if (oldPassword == "0")
                return false;
            if (oldPassword != this->_password) {
                printf("Wrong Password\n");
                printf("You have %d trials out of %d left\n", trials, MAX_PI_CHANGE_TRIALS);
                continue;
            }
        }
        std::string newPassword = User::input("Your New Password");
        if (newPassword == "0")
            return false;
        std::string newPasswordConfirmation = User::input("Your New Password Again for Confirmation");
        if (newPasswordConfirmation == "0")
            return false;
        if (newPassword != newPasswordConfirmation) {
            printf("Your new password and it's confirmation do not match\n");
            printf("You have %d trials out of %d left\n", trials, MAX_PI_CHANGE_TRIALS);
            continue;
        }
        this->_password = newPassword;
        return true;
    }
    return false;
}

int User::subtract(const int &a, const int &b) {
    return a - b;
}
