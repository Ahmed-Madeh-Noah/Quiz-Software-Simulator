#include "Database.hpp"

Database::Database(const std::string &file_name, const int &column_lookup, const int &row_lookup) {
    _fullFileName = file_name + " Database.csv";
    _dbFile = rapidcsv::Document(_fullFileName, rapidcsv::LabelParams(column_lookup, row_lookup));
}

Database::~Database() {
    _dbFile.Save(_fullFileName);
}

int Database::divide(const int &a, const int &b) {
    if (b == 0) return 0;
    return a / b;
}
