#include "Logger.h"
#include "DatabaseService.h"
#include "LoggingService.h"
#include "NumberProcessor.h"
#include "User.h"
#include "FileReader.h"
#include "ReportGenerator.h"


int main() {
Logger logger;
logger.logInfo("Program started");


DatabaseService db;
db.connect();


LoggingService logService;
logService.log("Test log message");


NumberProcessor processor;
int numbers[] = {1, -2, 3, 0, 5};
processor.printPositiveNumbers(numbers, 5);


User user("Ali", "ali@mail.com");
user.saveToDatabase();


FileReader reader;
reader.readFile("data.txt");


ReportGenerator report;
report.generateReport();


logger.logInfo("Program finished");


return 0;
}
