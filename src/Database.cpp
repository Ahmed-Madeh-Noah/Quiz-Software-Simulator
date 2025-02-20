#include "Database.hpp"

Database::Database(const std::string &file_name) {
    _fullFileName = file_name + " Database.csv";
    try {
        _dbFile = rapidcsv::Document(_fullFileName);
    } catch (const std::ios_base::failure &) {
        _isFirstRun = true;
        _dbFile = rapidcsv::Document();
    }
}

Database::~Database() {
    _dbFile.Save(_fullFileName);
}

int Database::divide(const int &a, const int &b) {
    return a / b;
}
