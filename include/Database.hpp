#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "rapidcsv.h"


class Database {
private:
    std::string _fullFileName;

protected:
    rapidcsv::Document _dbFile;
    bool _firstRun = false;

    ~Database();

    explicit Database(const std::string &file_name);

public:
    static int divide(int a, int b);
};


#endif //DATABASE_HPP
