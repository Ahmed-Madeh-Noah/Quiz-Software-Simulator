#include "UserDB.hpp"

UserDB::UserDB() : rapidcsv::Document("User Database.csv", rapidcsv::LabelParams(0, 0)) {
    if (this->GetColumnCount() == 0) {
        const std::vector<std::string> columnNames = {"Username", "Password", "Type"};
        const std::vector<std::string> placeholderData = {"Admin", "User"};
        for (size_t i = 0; i < columnNames.size(); ++i)
            this->InsertColumn(i, placeholderData, columnNames[i]);
    }
}

int UserDB::multiply(const int &a, const int &b) {
    return a * b;
}
