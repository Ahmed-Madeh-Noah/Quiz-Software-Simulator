#include "UserDB.hpp"

void UserDB::_fill_placeholder_data() {
    const std::vector<std::string> placeholder_data = {"Admin", "User"};
    _dbFile.InsertColumn<std::string>(0, placeholder_data, "Username");
    _dbFile.InsertColumn<std::string>(0, placeholder_data, "Password");
    _dbFile.InsertColumn<std::string>(0, placeholder_data, "Type");
}

UserDB::UserDB(const std::string &file_name) : Database(file_name) {
    if (_firstRun)
        _fill_placeholder_data();
}

int UserDB::multiply(const int &a, const int &b) {
    return a * b;
}
