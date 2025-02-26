#include "UserDB.hpp"

UserDB::UserDB() : Database("User", 0, 0) {
    std::cout << _dbFile.GetColumnCount() << std::endl;
    if (_dbFile.GetColumnCount() == 0) {
        const std::vector<std::string> columnNames = {"Username", "Password", "Type"};
        const std::vector<std::string> placeholderData = {"Admin", "User"};
        for (size_t i = 0; i < columnNames.size(); ++i)
            _dbFile.InsertColumn(i, placeholderData, columnNames[i]);
    }
}

int UserDB::subtract(const int &a, const int &b) {
    return a - b;
}
