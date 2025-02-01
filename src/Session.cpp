#include "Session.hpp"

Session::Session() {
    user = new User();
}

int Session::add(int a, int b) {
    return a + b;
}

Session::~Session() {
    delete user;
}
