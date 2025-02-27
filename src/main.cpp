#include <Session.hpp>
#include <User.hpp>

int main() {
    do {
        Session session;
    } while (User::input("continuation", "bool", "exiting") == "1");
    return EXIT_SUCCESS;
}
