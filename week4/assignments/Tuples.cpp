// Jacob Ogden
// 2/10/2023
#include <tuple>
#include <string>
#include <iostream>

using std::tuple;
using std::string;
using std::cout;
using std::endl;


tuple<string, int, int> get_tuple(string input) {
    int word_count = 0;
    int char_count = 0;
    bool consecutive_space_check = false;
    if (input[0] != ' ') {
        word_count++;
    }
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            if (!consecutive_space_check) {
                word_count++;
                consecutive_space_check = true;
            }
        }
        else {
            consecutive_space_check = false;
        }
        char_count++;
    }
    return std::make_tuple(input, word_count, char_count);
}



int main(int argc, char *argv[]) {
    string input;
    cout << "Enter a string: ";
    getline(std::cin, input);
    cout << input << endl;
    tuple<string, int, int> t = get_tuple(input);
    cout << "String: " << std::get<0>(t) << endl;
    cout << "Word count: " << std::get<1>(t) << endl;
    cout << "Character count: " << std::get<2>(t) << endl;

    return 0;
}
