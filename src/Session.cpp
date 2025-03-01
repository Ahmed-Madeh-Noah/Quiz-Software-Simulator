#include "Session.hpp"

void Session::sign_up() {
    const std::string username = User::input("Your Desired Username");
    if (username == "0")
        return;
    this->_user = User(username);
    if (this->_userDB.get_user(this->_user)) {
        printf("User already exists\n");
        return;
    }
}

int Session::add(const int &a, const int &b) {
    return a + b;
}
