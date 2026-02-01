#ifndef LOGGER_H
#define LOGGER_H


#include <iostream>
#include <string>


class Logger {
private:
void log(const std::string& level, const std::string& message) {
std::cout << level << ": " << message << std::endl;
}


public:
void logError(const std::string& message) {
log("ERROR", message);
}


void logWarning(const std::string& message) {
log("WARNING", message);
}


void logInfo(const std::string& message) {
log("INFO", message);
}
};


#endif
