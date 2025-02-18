#include "Database.hpp"

Database::Database(const std::string &file_name) {
    fullFileName = file_name + " Database.csv";
    try {
        dbFile = rapidcsv::Document(fullFileName);
    } catch (const std::ios_base::failure &) {
        firstRun = true;
        dbFile = rapidcsv::Document();
    }
}

Database::~Database() {
    dbFile.Save(fullFileName);
}

int Database::divide(const int a, const int b) {
    return a / b;
}
