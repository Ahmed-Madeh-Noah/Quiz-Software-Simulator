#ifndef DATABASE_HPP
#define DATABASE_HPP


#include "rapidcsv.h"

class Database {
private:
    std::string _fullFileName;

protected:
    explicit Database(const std::string &file_name, const int &column_lookup = 0, const int &row_lookup = -1);

    rapidcsv::Document _dbFile;

    ~Database();

public:
    static int divide(const int &a, const int &b);
};


#endif //DATABASE_HPP
