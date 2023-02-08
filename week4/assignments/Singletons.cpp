// Jacob Ogden
// 2/8/2023
// Design a singleton class named Log that can be used to log messages to a file. The class should have the following requirements:
//     • The class should be a singleton, meaning that only one instance of the class can exist at any given time.
//     • The class should have a log method that takes a message as a parameter and writes it to a file.
//     • The file to which the messages are written should be specified by a configuration file.
//     • If the file specified in the configuration file does not exist, it should be created.
//     • If the file specified in the configuration file exists, the messages should be appended to the end of the file.
//     • For this exercise, just hand input four “messages” to be logged.  
//     • Display the contents of the log.  
#include <iostream>
#include <fstream>
#include <string>


using std::cout;
using std::endl;
using std::string;
using std::fstream;

class Log {
    private:
    static Log *instance;
    Log() {};
    Log(const Log &copy) = delete;
    Log &operator=(const Log &copy) = delete;

    public:
    static Log *getInstance() {
        if (instance == nullptr) {
            instance = new Log();
        }
        return instance;
    }

    void log(string message) {
        fstream file("log.txt", std::ios::app);
        file << message << endl;
        file.close();
    }
};

int main(int argc, char *argv[]) {
    Log *log;
    log->log("This is a test message");
    log->log("This is a test message");
    log->log("This is a test message");
    log->log("This is a test message");

    return 0;
}