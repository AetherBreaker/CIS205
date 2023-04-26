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
#include <filesystem>


using std::cout;
using std::endl;
using std::string;
using std::fstream;

class Log {
    private:
    std::filesystem::path log_path;
    Log() {
        load_config();
    };

    // load log path from config file
    // if config file does not exist, create it with default path
    void load_config(const string config_file = std::filesystem::current_path().string() + "\\config.txt") {
        cout << "111" + std::filesystem::current_path().string() << endl;
        std::filesystem::path path(config_file);
        fstream config(path);
        if (!config.is_open()) {
            config.open(path, std::ios::out);
            config << std::filesystem::current_path().string() + "\\log.txt";
            config.close();
        }
        else {
            config >> log_path;
            config.close();
        }

    }

    public:
    Log(const Log &copy) = delete;
    Log &operator=(const Log &copy) = delete;
    static Log &getInstance() {
        static Log instance;
        return instance;
    }

    void log(string message) {
        // debug output
        cout << "Logging message:\n";
        cout << message << endl;

        // write to file
        fstream file("log.txt", std::ios::app);
        file << message << endl;
        file.close();
    }
};




int main(int argc, char *argv[]) {
    Log &log = Log::getInstance();

    cout << "Logging messages..." << endl;
    log.log("messages");
    log.log("messages");
    log.log("messages");
    log.log("messages");

    return 0;
}