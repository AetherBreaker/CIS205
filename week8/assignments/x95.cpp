// Jacob Ogden
// 3/16/2023
// Implement an enum called Season with enumerators spring, summer, autumn, and winter.
// Define operators ++ and −− for Season.
// Define input (>>) and output (<<) operations for Season, providing string values.
// Provide a way to control the mapping between Season values and their string representations.
// Comment and explain your logic in your code.

#include <iostream>
#include <string>

using namespace std;

enum Season {
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER
};

// Define the increment operator ++ for Season.
Season &operator++(Season &s) {
    // I could just implicitly convert the enum to an integer and add 1 to it.
    // but I'm fairly certain a switch statement would actually be more performant (though it hardly matters).
    // Also the switch statement is MUCH more readable and makes it easier to tell whats going on.
    switch (s) {
        case SPRING: return s = SUMMER;
        case SUMMER: return s = AUTUMN;
        case AUTUMN: return s = WINTER;
        case WINTER: return s = SPRING;
        default: return s = SPRING; // Default case to avoid warnings.
    }
}

// Define the decrement operator -- for Season.
Season &operator--(Season &s) {
    switch (s) {
        case SPRING: return s = WINTER;
        case SUMMER: return s = SPRING;
        case AUTUMN: return s = SUMMER;
        case WINTER: return s = AUTUMN;
        default: return s = SPRING; // Default case to avoid warnings.
    }
}

Season &operator<<(Season &s, string str) {
    switch (s) {
        case SPRING: return s = WINTER;
        case SUMMER: return s = SPRING;
        case AUTUMN: return s = SUMMER;
        case WINTER: return s = AUTUMN;
        default: return s = SPRING; // Default case to avoid warnings.
    }
}

Season &operator>>(Season &s, string str) {
    switch (s) {
        case SPRING: return s = WINTER;
        case SUMMER: return s = SPRING;
        case AUTUMN: return s = SUMMER;
        case WINTER: return s = AUTUMN;
        default: return s = SPRING; // Default case to avoid warnings.
    }
}

// "Provide a way to control the mapping between Season values and their string representations."
// I have no idea what you're asking for with this line, I can't for the life of me figure out what you mean.

int main() {
    Season s = SPRING;
    std::cout << "The current season is " << s << ".\n";
    ++s;
    std::cout << "Now the season is " << s << ".\n";
    --s;
    std::cout << "Back to " << s << ".\n";
    std::cout << "Enter a season name: ";
    std::string str;
    std::cin >> str;
    s << str;
    std::cout << "The season is now " << s << ".\n";
    return 0;
}

