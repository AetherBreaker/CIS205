// Jacob Ogden
// 2/1/2023
// Source file for Unique project
#include "Unique.hpp"
#include <memory>

using std::unique_ptr;

int main() {
    unique_ptr<Foo> foo1 = std::make_unique<Foo>(5);

}