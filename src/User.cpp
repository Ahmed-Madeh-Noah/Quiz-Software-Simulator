#include "User.hpp"
#include <algorithm>

int User::subtract(const int a, const int b) {
    return a - b;
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
        if (data_type == "int" && !_validate_int(output)) {
            printf("Cannot accept non-numeric input\n");
            askForInput = true;
        }
    }
    return output;
}
