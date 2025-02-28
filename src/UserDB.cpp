#include "UserDB.hpp"
#include <filesystem>

int UserDB::get_users_count() const {
    return this->GetColumnCount() - 1;
}

bool UserDB::get_user(User &user) const {
    try {
        std::vector<std::string> row = this->GetRow<std::string>(user.username);
        return true;
    } catch (const std::out_of_range &e) {
        return false;
    }
}

UserDB::UserDB() : rapidcsv::Document() {
    if (!std::filesystem::exists(this->_fileName)) {
        std::ofstream file(this->_fileName);
        file.close();
    }
    this->Load(this->_fileName, rapidcsv::LabelParams(0, 0));
    if (this->GetColumnCount() == 0) {
        const std::vector<std::string> columnNames = {"Username", "Password", "Type"};
        const std::vector<std::string> placeholderData = {"Admin", "User"};
        for (size_t i = 0; i < columnNames.size(); ++i)
            this->InsertColumn(i - 1, placeholderData, columnNames[i]);
        this->Save(this->_fileName);
        this->Load(this->_fileName, rapidcsv::LabelParams(0, 0));
    }
}

UserDB::~UserDB() {
    this->Save(this->_fileName);
}

int UserDB::multiply(const int &a, const int &b) {
    return a * b;
}
