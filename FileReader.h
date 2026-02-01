#ifndef FILE_READER_H
#define FILE_READER_H


#include <iostream>
#include <string>


class FileReader {
public:
std::string readFile(const std::string& path) {
std::cout << "Reading file: " << path << std::endl;
return "File content";
}
};


#endif
