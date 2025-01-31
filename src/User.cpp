#include "User.h"

string User::input(const string &prompt) {
    string output;
    printf("Enter %s:", prompt.c_str());
    getline(cin, output);
    if (output.empty()) {
        printf("Cannot accept an empty input\n");
        return input(prompt);
    }
    return output;
}

User::User() {
    constexpr int maxPassTrials = 3;
    string inputUsername, inputPassword;
    int passTrials;
    inputUsername = input("your username");
}

int User::subtract(int a, int b) {
    return a - b;
}
