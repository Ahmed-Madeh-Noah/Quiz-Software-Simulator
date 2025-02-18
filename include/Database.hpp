#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "rapidcsv.h"


class Database {
private:
    rapidcsv::Document dbFile;

    std::string fullFileName;

    bool firstRun = false;

    explicit Database(const std::string &file_name);

    ~Database();

public:
    static int divide(int a, int b);
};


#endif //DATABASE_HPP
