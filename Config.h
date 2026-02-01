#ifndef CONFIG_H
#define CONFIG_H


#include <string>


class Config {
public:
static std::string getConnectionString() {
return "Server=myServer;Database=myDb;UserId=myUser;Password=myPass;";
}
};


#endif
