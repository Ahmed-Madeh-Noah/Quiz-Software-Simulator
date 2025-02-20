#include "UserDB.hpp"

UserDB::UserDB() : Database("Users") {
    if (_isFirstRun) {
        const std::vector<std::string> columnNames = {"Username", "Password", "Type"};
        const std::vector<std::string> placeholderData = {"Admin", "User"};
        for (size_t i = 0; i < columnNames.size(); i++)
            _dbFile.InsertColumn(i, placeholderData, columnNames.at(i));
    }
}

int UserDB::multiply(const int &a, const int &b) {
    return a * b;
}
