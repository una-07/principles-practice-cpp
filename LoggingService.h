#ifndef LOGGING_SERVICE_H
#define LOGGING_SERVICE_H


#include <iostream>
#include "Config.h"


class LoggingService {
public:
void log(const std::string& message) {
std::string connectionString = Config::getConnectionString();
std::cout << "Logging to DB: " << message << std::endl;
std::cout << "Using: " << connectionString << std::endl;
}
};


#endif
