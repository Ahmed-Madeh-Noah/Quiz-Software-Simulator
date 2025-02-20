#ifndef DATABASE_HPP
#define DATABASE_HPP


#include "rapidcsv.h"

class Database {
private:
    std::string _fullFileName;

protected:
    bool _isFirstRun = false;
    rapidcsv::Document _dbFile;

    explicit Database(const std::string &file_name);

    ~Database();

public:
    static int divide(const int &a, const int &b);
};


#endif //DATABASE_HPP
