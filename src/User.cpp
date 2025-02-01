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
    ;
}

int User::subtract(int a, int b) {
    return a - b;
}
