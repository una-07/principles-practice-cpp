#ifndef USER_H
#define USER_H


#include <iostream>
#include <string>


class User {
private:
std::string name;
std::string email;


public:
User(const std::string& n, const std::string& e)
: name(n), email(e) {}


void saveToDatabase() {
std::cout << "Saving user: " << name << " to database" << std::endl;
}
};


#endif
