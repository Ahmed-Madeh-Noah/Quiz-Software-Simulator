#ifndef DATABASE_HPP
#define DATABASE_HPP


#include "rapidcsv.h"

class Database {
private:
    std::string _fullFileName;
    rapidcsv::Document _dbFile;
    bool _initializedFile = true;

protected:
    explicit Database(const std::string &file_name);

    ~Database();

public:
    static int divide(const int &a, const int &b);
};


#endif //DATABASE_HPP
