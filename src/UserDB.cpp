#include "UserDB.hpp"
#include <filesystem>

UserDB::UserDB() : rapidcsv::Document() {
    if (!std::filesystem::exists(_fileName)) {
        std::ofstream file(_fileName);
        file.close();
    }
    this->Load(_fileName, rapidcsv::LabelParams(0, 0));
    if (this->GetColumnCount() == 0) {
        const std::vector<std::string> columnNames = {"Username", "Password", "Type"};
        const std::vector<std::string> placeholderData = {"Admin", "User"};
        for (size_t i = 0; i < columnNames.size(); ++i)
            this->InsertColumn(i - 1, placeholderData, columnNames[i]);
        this->Save(_fileName);
        this->Load(_fileName, rapidcsv::LabelParams(0, 0));
    }
    std::cout << this->GetCell<std::string>("Password", "Admin") << std::endl;
}

UserDB::~UserDB() {
    this->Save(_fileName);
}

int UserDB::multiply(const int &a, const int &b) {
    return a * b;
}
