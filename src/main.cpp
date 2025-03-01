#include <Session.hpp>

int main() {
    std::string exiting;
    do {
        Session session;
        exiting = User::input("continuation", "bool", "exiting")
    } while (exiting == "1");
    return EXIT_SUCCESS;
}
