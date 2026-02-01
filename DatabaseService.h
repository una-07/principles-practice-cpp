#ifndef DATABASE_SERVICE_H
#define DATABASE_SERVICE_H


#include <iostream>
#include "Config.h"


class DatabaseService {
public:
void connect() {
std::string connectionString = Config::getConnectionString();
std::cout << "Connecting to DB: " << connectionString << std::endl;
}
};


#endif
